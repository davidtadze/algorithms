#include <exception>
#include <stdexcept>
#include <vector>

namespace algorithms {

/**
 *  a number of different possible policies (and thus implementations)
 *  comes to mind:
 *  1. size: (a) fixed size (b) resizable
 *  2. underlying data structure: (a) array (b) vector (c) queue (d) linked list
 *  3. error handling: (a) no error handling (b) exception-neutral (c)
 * exception-safe
 *  4. multithreading etc.
 *
 *  that being said:
 *  1. the simplest combination is the best candidate for first implementation,
 *  and that seems to be% fixed size, array based, no error handling stack
 *  2. though a more convinient combination seems to be%
 *  resizable, vector based, exception-neutral stack
 *
 *  todo: read about an elegant way to implement different policies
 */
template <typename T>
class Stack {
 private:
  std::vector<T> vector_{};

 public:
  void push(const T& element) { vector_.push_back(element); }

  void pop(T& result) {
    if (!is_empty()) {
      result = vector_.back();
      vector_.pop_back();
    }
  }

  auto is_empty() -> bool { return vector_.empty(); }
};

}  // namespace algorithms