#ifndef HIGH_6_TEMPLATE_PUBLIC_H
#define HIGH_6_TEMPLATE_PUBLIC_H
#include <iostream>
using namespace std;

void func ();

void test();

template <typename T>
void SwapX(T& first, T& second)
{
    T temp = first;
    first = second;
    second = temp;
    cout << "Normal" << endl;
}

// void SwapY() {
//     // int temp = first;
//     // first = second;
//     // second = temp;
//     cout << "int" << endl;
// }
#endif //HIGH_6_TEMPLATE_PUBLIC_H
