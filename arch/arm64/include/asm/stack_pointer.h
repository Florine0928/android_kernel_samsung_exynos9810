#ifndef __ASM_STACK_POINTER_H
#define __ASM_STACK_POINTER_H

/*
 * how to get the current stack pointer from C
 */
unsigned long current_stack_pointer(void) {
    register unsigned long sp asm("sp");
    return sp; // Local context use
}


#endif /* __ASM_STACK_POINTER_H */
