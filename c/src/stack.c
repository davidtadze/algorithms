#include <assert.h>
#include "stack.h"

const int N = 32;

struct STACK {
  const T* array[N];
  int top;
} stack;

void STACK_init(const int N) {
  stack.top = -1;
}

void STACK_push(const T* element) {
  assert(stack.top < N - 1);
  ++stack.top;
  stack.array[stack.top] = element;
}

const T* STACK_pop() {
  assert(!STACK_is_empty());
  unsigned int top = stack.top;
  --stack.top;
  return stack.array[top];
}

int STACK_is_empty() { return stack.top == -1; }
