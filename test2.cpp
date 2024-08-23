#include <functional>
#include <iostream>
using namespace std;

int sum(int left, int middle, int right) {
    cout << "left\t" << left << endl;
    cout << "middle\t" << middle << endl;
    cout << "right\t" << right << endl;
    return left + middle + right;
}

auto sumx(long a, long b) -> int {
    if (a > 0) {
        return 0l;
    }
    return a + b;
}

int main() {

    auto func = [](auto num1, auto num2)->auto {return num1 + num2;};
    auto res1 = func(1, 2);
    auto res2 = func(1, 2.1);
    cout << func(1, 2) << endl;
    cout << func(1, 2.1) << endl;

    int &&ref1 = func(1, 99);
    int &&ref2 = 66;
    cout << ref2 << endl;
    cout << ref1 << endl;

    return 0;
}