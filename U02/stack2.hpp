#include <cassert>
#include <deque>
#include <string>

#include "stack1.hpp"

using std::string;

template <>
class Stack<string> {
 private:
  std::deque<string> elems;

 public:
  void push(string const&);
  void pop();
  string const& top() const;
  bool empty() const { return elems.empty(); }
};

void Stack<string>::push(string const& elem) { elems.push_back(elem); }

void Stack<string>::pop() {
  assert(!elems.empty());
  elems.pop_back();
}

string const& Stack<string>::top() const {
  assert(!elems.empty());
  return elems.back();
}