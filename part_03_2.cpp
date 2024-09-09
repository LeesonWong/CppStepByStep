#include <string>
#include <vector>
#include <chrono>
#include <iostream>
#include <utility>
#include <typeinfo>

using namespace std;

class Person {};

// ����ʧ��
// auto sum () {
//     bool res = true;
//
//     if (res) {
//         return 0;
//     } else {
//         long long num = 10;
//         return num;
//     }
// }

// auto���Ƶ�����
int main () {
    // 1�����auto�����ı����ǰ�ֵ��ʼ��������CV�޶�������const��volatile
    const int i = 10;
    auto j = i; // ����CV
    auto &ri = i; // const int&
    auto *pi = &i; // const int*
    const auto ii = i; // const int

    const Person p;
    auto ap = p;
    auto &apr = p;
    auto *app = &p;

    // 2��auto��ʼ��ʱ��������������ã��������Ա�����
    int x = 10;
    int &y = x;
    auto z1 = x;
    auto z2 = y;
    z1 = 20;
    z2 = 30;
    cout << x << endl;
    cout << z1 << endl;
    cout << z2 << endl;

    // 3��ʹ��auto&&���������ã������������ֵ����Ϊ��ֵ����
    int m = 5;
    auto&& n = m;
    auto && num = 5;

    // 4��auto����������Ŀ�����������������Ƶ�Ϊָ��
    int arr[5];
    auto aArr = arr;
    auto func = [](int a) { };
    cout << typeid(aArr).name() << endl;
    cout << typeid(func).name() << endl;

    // 5��auto���������﷨��
    auto num1{100};
    // auto num2{200, 300}; �����쳣
    auto arr1 = {100, 200 , 300 , 400 , 500 , 600 , 700 , 800 , 900};
    auto arr2 = {999}; // һ��Ԫ��Ҳ��list
    cout << *(arr1.begin() + 1) << endl;
    cout << *arr2.begin() << endl;

    // 6���������͵��Ƶ� �ڷ�֧��䣨��Ŀ���ʽ���а��շ�Χ���������ƶ�; ���Ǻ�������ֵ����ȷ�����ͣ�����ʾ�����Ǳ���ʧ��
    // cout << sum() << endl;
}
