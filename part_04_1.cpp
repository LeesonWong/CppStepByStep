#include <string>
#include <vector>
#include <chrono>
#include <iostream>
#include <utility>

using namespace std;

/**
 * typeof��һ�ֺ�������÷���ֻ��GCC֧��
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
