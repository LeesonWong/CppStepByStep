#include <iostream>
using namespace std;

int main () {
    int i = 5;
    int& iR = i;
    int&& num = 5;
    int anoNum = num;
    // cout << typeid(i).name() << endl;
    // cout << typeid(iR).name() << endl;
    // cout << typeid(num).name() << endl;
    // cout << typeid(anoNum).name() << endl;

    auto & ai = i;
    auto && aii = i;
    auto && aiii = 50;
    // cout << typeid(ai).name() << endl;
    // cout << typeid(aii).name() << endl;
    // cout << typeid(aiii).name() << endl;


    int arr[5] {1, 2, 3, 4, 5};
    auto arrNext = arr;
    cout << typeid(arr).name() << endl;
    cout << typeid(arrNext).name() << endl;

    auto arr1 = {1};
    auto arr2 = {1, 2, 3, 4};
    cout << typeid(arr1).name() << endl;
    cout << typeid(arr2).name() << endl;

    auto s1{1};
    auto s2{1.1};
    auto s3{'c'};
    auto s4{"word"};
    cout << typeid(s1).name() << endl;
    cout << typeid(s2).name() << endl;
    cout << typeid(s3).name() << endl;
    cout << typeid(s4).name() << endl;
}