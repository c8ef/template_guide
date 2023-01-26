#include "max1.hpp"

#include <iostream>
#include <string>

using std::cout;
using std::string;

int main() {
  int i = 42;
  cout << "max(7, i): " << ::max(7, i) << '\n';

  double f1 = 3.4;
  double f2 = -6.7;
  cout << "max(f1, f2): " << ::max(f1, f2) << '\n';

  string s1 = "mathematics";
  string s2 = "math";
  cout << "max(s1, s2): " << ::max(s1, s2) << '\n';
}