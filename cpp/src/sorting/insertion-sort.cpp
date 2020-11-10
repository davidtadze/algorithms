#ifndef ALGORITHMS_INSERTION_SORT_HPP
#define ALGORITHMS_INSERTION_SORT_HPP

#include <utility/utility.cpp>

namespace algorithms {
/**
 *  it would be interesting to experiment with different implementations:
 *  - search for insertion place from beginning/ ending of the array
 *  - in place/ in a new array
 *  etc.
 */
template <typename T>
void insertion_sort(T* array, int n) {
  if (n == 0 || n == 1) {
    return;
  }
  for (int unsorted = 1; unsorted < n; ++unsorted) {
    T current_element = array[unsorted];
    T max_sorted_element = array[unsorted - 1];
    if (current_element >= max_sorted_element) {
      continue;
    }
    for (int insert = 0; insert <= unsorted; ++insert) {
      T compare_element = array[insert];
      if (current_element <= compare_element) {
        for (int shift = unsorted; insert < shift; --shift) {
          T left_element = array[shift - 1];
          array[shift] = left_element;
        }
        array[insert] = current_element;
        break;
      }
    }
  }
}
}  // namespace algorithms

#endif  // ALGORITHMS_INSERTION_SORT_HPP