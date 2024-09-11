#include <iostream>
using namespace std;

int* test(int& param) {
    return &param;
}

int* GetNum() {
    return new int(100);
}

int* GetArray() {
    return new int[100];
}

int main() {
    int num = 10;
    auto res = test(num);
    cout << res << endl;
    cout << *res << endl;

    auto res2 = GetNum();
    cout << res2 << endl;
    cout << *res2 << endl;
    delete res2;
    cout << res2 << endl;
    cout << *res2 << endl;
    // cout << nullptr << endl;
    // cout << NULL << endl;

    cout << "----" << endl;
    auto res3 = GetArray();
    cout << sizeof(res3) << endl;
    cout << sizeof(num) << endl;

    cout << "----" << endl;
    int arr[] = {1,2,3,4,5,6};
    cout << typeid(arr).name() << endl;
    cout << sizeof(arr) << endl;


    return 0;
}