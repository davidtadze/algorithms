#include <array>
#include <cstddef>

namespace algorithms {

/**
 *  a number of different possible Stack policies (and thus implementation) comes to mind:
 *
 *  1. size: (a) fixed size (b) resizable
 *  2. underlying data structure: (a) array (b) vector (c) queue (d) linked list
 *  3. error handling: (a) no error handling (b) assert (c) throw
 *  4. multithreading
 *
 *  the simplest combination (and thus best for first implementation) seems to
 *  be fixed size, array based, no error handling, single threaded Stack
 */
template <typename T, std::size_t N>
class Stack {
 private:
  std::array<T, N> array_{};
  std::size_t top_ = 0;

 public:
  void push(const T& element) {
    assert(top_ < N);
    array_[top_] = element;
    ++top_;
  }

  auto pop() -> const T& {
    assert(!is_empty());
    --top_;
    return array_[top_];
  }

  auto is_empty() -> bool { return top_ == 0; }
};

}  // namespace algorithms