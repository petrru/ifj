/**
 *
 * @file stack.h
 *
 */
#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

typedef struct {
    void **data;
    unsigned used;  // stack pointer
    unsigned size;  // maximal size
} T_stack;

T_stack *stack_init();

void stack_push(T_stack *stack, void *item);

void *stack_top(T_stack *stack);

void stack_pop(T_stack *stack);

void stack_remove(T_stack **stack, bool is_frame_stack);

#endif

