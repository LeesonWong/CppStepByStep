#include <iostream>
using namespace std;

#define PRINT_L(X) std::cout << sizeof(X) << std::endl

// C++的基础类型
int main () {
    // int 只是表示变量为整数
    int a = 1;
    PRINT_L(a);

    // 我们可以使用short、long来修饰int
    short int b = 2;
    PRINT_L(b);

    // 可以用一个short修饰int，不能用两个short修饰int，且short int可简略表示成short
    // short short int c = 3;
    short d = 4;
    PRINT_L(d);

    // 可以用long修饰int，也可以用两个long修饰int，标准只规定了越来越长，但是没规定具体是多少，同样的int可省略
    long e = 5;
    PRINT_L(e);

    long int f = 5;
    PRINT_L(f);

    long long int g = 6;
    PRINT_L(g);

    std::cout << "--------------------print range--------------------" << std::endl;

    // 获取类型的范围
    std::cout << std::numeric_limits<int>::min() << std::endl;
    std::cout << std::numeric_limits<int>::max() << std::endl;

    std::cout << std::numeric_limits<short>::min() << std::endl;
    std::cout << std::numeric_limits<short>::max() << std::endl;

    std::cout << std::numeric_limits<long>::min() << std::endl;
    std::cout << std::numeric_limits<long>::max() << std::endl;

    std::cout << std::numeric_limits<long long>::min() << std::endl;
    std::cout << std::numeric_limits<long long>::max() << std::endl;

    std::cout << "--------------------char--------------------" << std::endl;

    // C++11添加了以下两个类型的目的是应对unicode的UTF-16 UTF-32
    char16_t ch1 = 'c';
    char32_t ch2 = 'd';

    cout << "你好" << endl;


    // int i = 5;
    // int& iR = i;
    // int&& num = 5;
    // int anoNum = num;
    // // cout << typeid(i).name() << endl;
    // // cout << typeid(iR).name() << endl;
    // // cout << typeid(num).name() << endl;
    // // cout << typeid(anoNum).name() << endl;
    //
    // auto & ai = i;
    // auto && aii = i;
    // auto && aiii = 50;
    // // cout << typeid(ai).name() << endl;
    // // cout << typeid(aii).name() << endl;
    // // cout << typeid(aiii).name() << endl;
    //
    //
    // int arr[5] {1, 2, 3, 4, 5};
    // auto arrNext = arr;
    // cout << typeid(arr).name() << endl;
    // cout << typeid(arrNext).name() << endl;
    //
    // auto arr1 = {1};
    // auto arr2 = {1, 2, 3, 4};
    // cout << typeid(arr1).name() << endl;
    // cout << typeid(arr2).name() << endl;
    //
    // auto s1{1};
    // auto s2{1.1};
    // auto s3{'c'};
    // auto s4{"word"};
    // cout << typeid(s1).name() << endl;
    // cout << typeid(s2).name() << endl;
    // cout << typeid(s3).name() << endl;
    // cout << typeid(s4).name() << endl;
}