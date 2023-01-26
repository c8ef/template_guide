#include <iostream>

using std::cout;

template <typename T>
T max(T a, T b) {
  cout << "max<T>()\n";
  return b < a ? a : b;
}

template <typename T>
T max(T a, T b, T c) {
  return max(max(a, b), c);
}

// won't be matched because it's declared after the template version
int max(int a, int b) {
  cout << "max(int, int)\n";
  return b < a ? a : b;
}

int main() { ::max(47, 11, 33); }