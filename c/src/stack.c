#include <assert.h>
#include <stdlib.h>

#include "stack.h"

STACK STACK_init(const unsigned int size) {
  STACK stack = { 
    .size = size,
    .array = malloc(size * sizeof(T)),
    .top = -1 
  };
  return stack;
}

void STACK_push(STACK* stack, const T* element) {
  assert(stack->top < stack->size - 1);
  stack->array[++stack->top] = *element;
}

void STACK_pop(STACK* stack, T* result) {
  if (!STACK_is_empty(stack)) {
    result = &stack->array[stack->top--];
  }
}

int STACK_is_empty(const STACK* stack) { return stack->top == -1; }
