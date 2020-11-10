#ifndef ALGORITHMS_UTILITY_HPP
#define ALGORITHMS_UTILITY_HPP

#include <cstdlib>
#include <iostream>

namespace algorithms {

/**
 *  this function actually works only with numeric types.
 *  an example of a better is to provide a T.random() function
 */
template <typename T>
void fill_with_random_numbers(T* array, int n) {
  for (int i = 0; i < n; ++i) {
    array[i] = rand();
  }
}

template <typename T>
void print(T* array, int n) {
  std::cout << "{ ";
  for (int i = 0; i < n; ++i) {
    std::cout << array[i] << ", ";
  }
  std::cout << "}" << std::endl;
}

template <typename T>
auto are_equal(T* array_a, T* array_b, int n) -> bool {
  for (int i = 0; i < n; ++i) {
    if (*(array_a + i) != *(array_b + i)) {
      return false;
    }
  }
  return true;
}

}  // namespace algorithms

#endif  // ALGORITHMS_UTILITY_HPP