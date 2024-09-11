#include <iostream>
#include <limits>
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
    std::cout << numeric_limits<int>::min() << std::endl;
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
}