#include <iostream>
using namespace std;

void func(int a) {
}

void func(int a, int b) {
}

int main() {
    func(5);
    func(1, 2);
    return 0;
}