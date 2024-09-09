#include <string>
#include <vector>
#include <chrono>
#include <iostream>
#include <utility>

using namespace std;

class Solution {
public:
    // Solution(int age)
    //     : age(age) {
    // }
    int age;
};

union Un {
    int a;
    double b;
    Solution s;
};

/**
 * 1����������union ��һ���ڴ�洢���ݣ����������ǲ�ȷ����
 * 2�����ܴ洢��ƽ�����ͣ������Զ������ͻ������࣬���ǲ����Զ��幹�캯����
 * 3��TODO C++11������һЩ���ԣ����Ƕ��ڷ�ͨ��Э����˵��ʹ��union��ȫû����
 *
 * @return
 */
int main(int argc, char *argv[]) {
    Un u;

    u.a = 1;
    cout << u.a << endl;
    cout << u.b << endl;

    u.b = 2.0;
    cout << u.a << endl;
    cout << u.b << endl;
}
