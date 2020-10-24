#include "element.h"

typedef struct STACK {
  unsigned int size;
  T* array;
  int top;
} STACK;

STACK STACK_init(unsigned int size);
void STACK_push(STACK* stack, const T* element);
void STACK_pop(STACK* stack, T* result);
int STACK_is_empty(const STACK* stack);

