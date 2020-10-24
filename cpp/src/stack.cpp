#include <array>

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
template <typename T, const int N>
class Stack {
 private:
  std::array<T, N> array_{};
  int top_ = -1;

 public:
  void push(const T& element) {
    assert(top_ < N - 1);
    ++top_;
    array_[top_] = element;
  }

  auto pop() -> const T& {
    assert(!is_empty());
    int top = top_;
    --top_;
    return array_[top];
  }

  auto is_empty() -> bool { return top_ == -1; }
};

}  // namespace algorithms