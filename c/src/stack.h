#include "element.h"

/**
 *  a number of different possible Stack policies (and thus implementation) comes to mind:
 *
 *  1. size: (a) fixed size (b) resizable
 *  2. underlying data structure: (a) array (b) vector (c) queue (d) linked list
 *  3. error handling: (a) no error handling (b) assert
 *
 *  the simplest combination (and thus best for first implementation) seems to
 *  be fixed size, array based, no error handling Stack
 */
void STACK_init(int N);
void STACK_push(const T* element);
const T* STACK_pop();
int STACK_is_empty();

