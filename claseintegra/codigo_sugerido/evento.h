#ifndef EVENTO_H
#define EVENTO_H

#define EVENTO_MOUSE 1
#define EVENTO_TECLA 2

typedef struct
{
    int tipo;
    int x;
    int y;
    int dx;
    int dy;
    unsigned char boton_izquierdo;
    char tecla;
} evento_t;

int evento_encolar(evento_t e);
int evento_desencolar(evento_t *e);
int evento_desencolar_seguro(evento_t *e);

#endif
