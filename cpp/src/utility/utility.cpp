#ifndef ALGORITHMS_UTILITY_HPP
#define ALGORITHMS_UTILITY_HPP

#include <cstdlib>
#include <iostream>

namespace algorithms {

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

auto calc_right(int left, int end) -> int {
  return left + (end - left) / 2 + (end - left) % 2;
}

auto calc_size(int left, int end) -> int {
  return end - left + 1;
}

template <typename T>
auto copy(T* array, int left, int right) -> T* {
  T* arr = new T[calc_size(left, right)];
  for(int i = 0; i < calc_size(left, right); ++i) {
    arr[i] = array[left + i];
  }
  return arr;
}

}  // namespace algorithms

#endif  // ALGORITHMS_UTILITY_HPP