#include <iostream>
using namespace std;

#define PRINT_L(X) std::cout << sizeof(X) << std::endl

// C++�Ļ�������
int main () {
    // int ֻ�Ǳ�ʾ����Ϊ����
    int a = 1;
    PRINT_L(a);

    // ���ǿ���ʹ��short��long������int
    short int b = 2;
    PRINT_L(b);

    // ������һ��short����int������������short����int����short int�ɼ��Ա�ʾ��short
    // short short int c = 3;
    short d = 4;
    PRINT_L(d);

    // ������long����int��Ҳ����������long����int����׼ֻ�涨��Խ��Խ��������û�涨�����Ƕ��٣�ͬ����int��ʡ��
    long e = 5;
    PRINT_L(e);

    long int f = 5;
    PRINT_L(f);

    long long int g = 6;
    PRINT_L(g);

    std::cout << "--------------------print range--------------------" << std::endl;

    // ��ȡ���͵ķ�Χ
    std::cout << std::numeric_limits<int>::min() << std::endl;
    std::cout << std::numeric_limits<int>::max() << std::endl;

    std::cout << std::numeric_limits<short>::min() << std::endl;
    std::cout << std::numeric_limits<short>::max() << std::endl;

    std::cout << std::numeric_limits<long>::min() << std::endl;
    std::cout << std::numeric_limits<long>::max() << std::endl;

    std::cout << std::numeric_limits<long long>::min() << std::endl;
    std::cout << std::numeric_limits<long long>::max() << std::endl;

    std::cout << "--------------------char--------------------" << std::endl;

    // C++11����������������͵�Ŀ����Ӧ��unicode��UTF-16 UTF-32
    char16_t ch1 = 'c';
    char32_t ch2 = 'd';

    cout << "���" << endl;


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