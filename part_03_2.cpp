#include <string>
#include <vector>
#include <chrono>
#include <iostream>
#include <utility>
#include <typeinfo>

using namespace std;

// auto���Ƶ�����
int main () {
    // 1�����auto�����ı����ǰ�ֵ��ʼ��������CV�޶�������const��volatile
    const int i = 10;
    auto j = i; // ����CV
    auto &ri = i; // const int&
    auto *pi = &i; // const int*
    const auto ii = i; // const int

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

    cout << *(arr1.begin() + 1) << endl;
    // auto num2 = {200, 3.14};
}
