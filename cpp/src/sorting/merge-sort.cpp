#ifndef ALGORITHMS_MERGE_SORT_HPP
#define ALGORITHMS_MERGE_SORT_HPP

#include <utility/utility.cpp>

namespace algorithms {

template <typename T>
void merge_sort(T* array, int n);

template <typename T>
void merge_sort(T* array, int left, int right, int end);

using algorithms::calc_right;
using algorithms::copy;

template <typename T>
void merge_sort(T* array, int n) {
  if (n == 0 || n == 1) {
    return;
  }

  merge_sort(array, 0, calc_right(0, n - 1), n - 1);
}

template <typename T>
void merge_sort(T* array, int left, int right, int end) {
  if (left == right) {
    return;
  }

  merge_sort(array, left, calc_right(left, right - 1), right - 1);
  merge_sort(array, right, calc_right(right, end), end);

  T* arr_left = copy(array, left, right - 1);
  T* arr_right = copy(array, right, end);

  int current_left = 0;
  int current_right = 0;
  for (int i = left; i <= end; ++i) {
    // if (current_left == (right - 1) - left + 1) {
    //   array[i] = arr_right[current_right];
    //   ++current_right;
    //   continue;
    // }
    // if (current_right == end - right + 1) {
    //   array[i] = arr_left[current_left];
    //   ++current_left;
    //   continue;
    // }

    if (current_right == end - right + 1 
        || arr_left[current_left] <= arr_right[current_right]) {
      array[i] = arr_left[current_left];
      ++current_left;
    } else if (current_left == (right - 1) - left + 1 
               || arr_left[current_left] > arr_right[current_right]) {
      array[i] = arr_right[current_right];
      ++current_right;
    }
  }
}

}  // namespace algorithms

#endif  // ALGORITHMS_MERGE_SORT_HPP