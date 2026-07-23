; lidt.asm
; Carga la IDT desde C usando la instrucción lidt.
; Firma esperada en C:
;     void idt_cargar(unsigned int idt_ptr);

global idt_cargar

idt_cargar:
    mov eax, [esp + 4]   ; primer argumento: dirección de idt_ptr
    lidt [eax]           ; cargar IDTR con limite/base
    ret
