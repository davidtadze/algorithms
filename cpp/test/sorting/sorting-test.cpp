#include <iostream>
#include <sorting/insertion-sort.cpp>
#include <utility/utility.cpp>

#include "gtest/gtest.h"

TEST(sorting_test, insertion_sort) {
  const int n_1 = 0;
  int array_1[n_1] = {};
  int array_1_sorted[n_1] = {};

  algorithms::insertion_sort(array_1, n_1);

  EXPECT_TRUE(algorithms::are_equal(array_1, array_1_sorted, n_1));

  const int n_2 = 10;
  int array_2[n_2] = {8, 5, 7, 3, 4, 0, 9, 2, 1, 6};
  int array_2_sorted[n_2] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  algorithms::insertion_sort(array_2, n_2);

  EXPECT_TRUE(algorithms::are_equal(array_2, array_2_sorted, n_2));
}