#include "evento.h"

#define MAX_EVENTOS 32

static evento_t cola[MAX_EVENTOS];
static int cabeza = 0;
static int cola_fin = 0;
static int cantidad = 0;

static void cli(void) { __asm__ volatile("cli"); }
static void sti(void) { __asm__ volatile("sti"); }

int evento_encolar(evento_t e)
{
    if (cantidad >= MAX_EVENTOS) return -1;
    cola[cola_fin] = e;
    cola_fin = (cola_fin + 1) % MAX_EVENTOS;
    cantidad++;
    return 0;
}

int evento_desencolar(evento_t *e)
{
    if (cantidad == 0) return 0;
    *e = cola[cabeza];
    cabeza = (cabeza + 1) % MAX_EVENTOS;
    cantidad--;
    return 1;
}

int evento_desencolar_seguro(evento_t *e)
{
    int ok;
    cli();
    ok = evento_desencolar(e);
    sti();
    return ok;
}
