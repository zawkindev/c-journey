#include <stdlib.h>
#define STACK_INIT_CAPACITY 4

typedef struct {
  int *data;
  int top;
  int capacity;
} Stack;

Stack *create_stack() {
  Stack *stack = (Stack *)malloc(sizeof(Stack));
  stack->data = (int *)malloc(sizeof(int) * STACK_INIT_CAPACITY);
  stack->top = -1;
  stack->capacity = STACK_INIT_CAPACITY;

  return stack;
}

void resize_stack(Stack *stack) {
  stack->capacity *= 2;
  stack->data = (int *)realloc(stack->data, stack->capacity * sizeof(int));
}

void push(Stack *stack, int value) {
  if (stack->top >= stack->capacity - 1) {
    resize_stack(stack);
  }
  stack->data[++stack->top] = value;
}
