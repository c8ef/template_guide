#include <cxxabi.h>

#include <iostream>
#include <string>

using namespace std::string_literals;

template <auto T>
class Message {
 public:
  void print() {
    std::cout << T << " -> "
              << abi::__cxa_demangle(typeid(T).name(), nullptr, nullptr,
                                     nullptr)
              << '\n';
  }
};

int main() {
  Message<42> msg1;
  msg1.print();

  static char const s[] = "hello";
  Message<s> msg2;
  msg2.print();
}