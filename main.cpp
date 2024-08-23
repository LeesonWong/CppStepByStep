#include <iostream>
#include <string>
#include <map>

using namespace std;

namespace Benchmarks {
    bool IsValidFile(const std::string& realPathStr, const std::string& validPath = "/data/")
    {
        return realPathStr.find(validPath) == 0;
    }

}

namespace Benchmarks {
    void test () {
        std::string valid = "/data/";
        std::string path1 = "1";
        std::string path2 = "/data";
        std::string path3 = "/data/xx";
        std::string path4 = "/ppp/data/xx";
        std::cout << path1.find(valid) << std::endl;
        std::cout << path2.find(valid) << std::endl;
        std::cout << path3.find(valid) << std::endl;
        std::cout << path4.find(valid) << std::endl;
        std::cout << (std::string::npos) << std::endl;

        IsValidFile("", "");
    }
}


enum class PixelFormat : int32_t {
    UNKNOWN = 0,
    ARGB_8888 = 1,  // Each pixel is stored on 4 bytes.
    RGB_565 = 2,    // Each pixel is stored on 2 bytes
    RGBA_8888 = 3,
    BGRA_8888 = 4,
    RGB_888 = 5,
    ALPHA_8 = 6,
    RGBA_F16 = 7,
    NV21 = 8,  // Each pixel is sorted on 3/2 bytes.
    NV12 = 9,
    CMYK = 10,
    RGBA_1010102 = 14,
};

namespace Parent {
    namespace Foo {
        void say() {
            std::cout << 1 << std::endl;
        }
    }

    inline namespace Foo2 {
        void say() {
            std::cout << 2 << std::endl;
        }
    }
}

// namespace Parent::inline Foo2 {
//     void say2() {
//         std::cout << 3 << std::endl;
//     }
// }

class Temp {
public:
    static const auto Num = 10;
    // auto Next = 10;
};

int main()
{
    // Parent::say();
    // Parent::say2();
    // int num = 10086;
    // auto pn = &num;
    // uint32_t pn32 = reinterpret_cast<uint32_t>(pn);
    // int* pnnext = reinterpret_cast<int*>(pn32);
    // cout << pnnext << endl;
    // cout << *(pnnext - 1) << endl;
    // cout << typeid(pn).name() << endl;

    // int num = 10;
    // auto *pn = &num, m = 10;
    //
    // auto f = true ? 4.1f : 1.1;

    // const int i = 5;
    // auto j = i;
    // i = 10;
    // j = 20;

    // int num1 = 10;
    // int ano1 = 20;
    //
    // int * ptr11 = &num1;
    // cout << *ptr11 << endl;
    // *ptr11 = 30;
    // cout << *ptr11 << endl;
    //
    // auto ptr12 = ptr11;
    // cout << *ptr12 << endl;
    // ptr12 = &ano1;
    // cout << *ptr12 << endl;
    // auto *ptr13 = ptr11;
    // cout << ptr13 << endl;
    // cout << *ptr13 << endl;
    //
    // const int num2 = 10;
    // const int ano2 = 20;
    // auto num21 = num2;
    // const int* ptr21 = &num2;
    // auto ptr22 = &num2;
    // ptr22 = &ano2;


    // 准则一：auto声明非引用或指针，会自动忽略右侧类型的const
    //       特殊情况，指针常量在声明auto *时会与其指向的类型匹配，也不会带
    int num = 10;
    int *ptr = &num;
    int * const ptrx = &num;
    int & ano = num;

    auto a11 = num;// int
    auto a12 = ptr;// int *
    auto a1x1 = ptrx;// int * const
    auto &a1x2 = ptrx;// int &
    auto a13 = ano;

    auto &a14 = num; // int
    auto &a15 = ptr; // int *
    auto &a16 = ano; // int &

    auto *a17 = &num; // int *
    auto *a18 = ptr; // int *
    auto *a19 = &ano; // int *


    const int num2 = 10;
    const int * const ptr2 = &num2;
    const int &ano2 = num2;

    auto a21 = num2; // const int
    auto a22 = ptr2; // const int * const
    // 准则二：右侧引用类型和值类型是一样的（优先规则）
    auto a23 = ano2; // const int &

    auto &a24 = num2; // const int
    auto &a25 = ptr2; // const int * const
    auto &a26 = ano2; // const int

    auto *a27 = &num2; // const int *
    auto *a28 = ptr2; // const int * const
    auto *a29 = &ano2; // const int *

    const int * const* ptrxxx = &ptr2;
    auto xx = ptrxxx;

    int i = 10;
    int &j = i;
    int &m = j;
    j = 20;
    cout << i << endl;
    cout << m << endl;

    map<string, string> aMap;
    aMap["aa"] = string("aab");
    aMap["bb"] = string("bbc");
    aMap["cc"] = string("ccd");
    for (const auto& [key, val] : aMap) {
        cout << typeid(key).name() << endl;
        cout << typeid(val).name() << endl;
        cout << "key:" << key << "\tval:" << val << endl;
    }


    return 0;
}