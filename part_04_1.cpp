#include <string>
#include <vector>
#include <chrono>
#include <iostream>
#include <utility>

using namespace std;

/**
 * typeof是一种很特殊的用法，只有GCC支持
 *
 * @return
 */
int main() {
    int num1 = 10;
    // typeof(num1) num2 = 100;
    // cout << "num2 = " << num2 << endl;


    decltype(num1) num2 = 20;
    cout << num2 << endl;
}
