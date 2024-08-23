#include <iostream>
using namespace std;

void test1() {
    int x = 5;
    auto foo = [x](int y) -> int { return x * y; };
}

int main() {
    return 0;
}
