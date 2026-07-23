#ifndef MOUSE_H
#define MOUSE_H

typedef struct
{
    int x;
    int y;
    int dx;
    int dy;
    unsigned char izquierdo;
    unsigned char derecho;
    unsigned char medio;
} mouse_estado_t;

void mouse_inicializar(void);
void mouse_handler_c(void);
mouse_estado_t mouse_obtener_estado(void);

#endif
