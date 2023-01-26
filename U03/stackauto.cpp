#include "stackauto.hpp"

#include <iostream>
#include <string>

int main() {
  Stack<int, 20u> int20Stack;
  Stack<std::string, 40> stringStack;

  int20Stack.push(7);
  std::cout << int20Stack.top() << '\n';
  auto size1 = int20Stack.size();

  stringStack.push("hello");
  std::cout << stringStack.top() << '\n';
  auto size2 = stringStack.size();

  if (!std::is_same_v<decltype(size1), decltype(size2)>) {
    std::cout << "size type differ\n";
  }
}