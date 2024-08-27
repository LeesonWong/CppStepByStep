#include <iostream>
using namespace std;

#define PRINT_L(X) std::cout << sizeof(X) << std::endl

enum Color: long { RED = 1, BLUE = 2, GREEN = 3 };

// 枚举
int main() {
  cout << Color::GREEN << endl;
}