#include <exception>
#include <stdexcept>
#include <vector>

namespace algorithms {

/**
 *  a number of different possible Stack policies (and thus implementation)
 * comes to mind:
 *
 *  1. size: (a) fixed size (b) resizable
 *  2. underlying data structure: (a) array (b) vector (c) queue (d) linked list
 *  3. error handling: (a) no error handling (b) assert (c) throw
 *  4. multithreading
 *
 *  the simplest combination (and thus best for first implementation) seems to
 * be fixed size, array based, no error handling, single threaded Stack
 *
 *  though a more convinient combination seems to be
 *  resizable, vector based, throwing, single threaded Stack
 */
template <typename T>
class Stack {
 private:
  std::vector<T> vector_{};

 public:
  void push(const T& element) { vector_.push_back(element); }

  auto pop() -> const T& {
    if (is_empty()) {
      throw std::runtime_error("stack is empty");
    }
    return vector_.pop_back();
  }

  auto is_empty() -> bool { return vector_.empty(); }
};

}  // namespace algorithms