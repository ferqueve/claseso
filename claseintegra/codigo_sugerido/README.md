# Código sugerido para ArSaMoOS

Estos archivos son esqueletos didácticos para acompañar las presentaciones. No reemplazan una revisión final en clase.

Orden sugerido:
1. Integrar `idt.o` y `pic.o` al Makefile.
2. Agregar stubs ASM para IRQ12.
3. Crear `mouse.h` y `mouse.c`.
4. Agregar `evento.h` y `evento.c`.
5. Extender `pantalla.c` con `pantalla_put_at`.
6. Usar `sem_pantalla` solo desde procesos, nunca desde el handler.
