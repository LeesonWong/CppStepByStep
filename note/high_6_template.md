C++模板

模板的笔记可以看这个
https://mq-b.github.io/Modern-Cpp-templates-tutorial/

函数模板
1、可以给类成员函数创建模板，但是不能是虚函数和析构函数
2、和函数调用类似，需要合适的参数（一般发生在两个函数及以上的情况）
3、模板函数中对变量的操作，由编译器检查
4、一般不会进行隐式类型转换，除非指定了类型
5、支持多个通用数据类型的参数
6、支持重载

自动推导和模板关系很大

```c++
#include <iostream>

template<typename T>
T max(T a, T b) {
    return a > b ? a : b;
}

struct Test{
    int v_{};
    Test() = default;
    Test(int v) :v_(v) {}
    bool operator>(const Test& t) const{
        return this->v_ > t.v_;
    }
};

int main(){
    int a{ 1 };
    int b{ 2 };
    std::cout << "max(a, b) : " << ::max(a, b) << '\n';

    Test t1{ 10 };
    Test t2{ 20 };
    std::cout << "max(t1, t2) : " << ::max(t1, t2).v_ << '\n';

}
```

编译器会实例化两个函数，也就是生成了一个参数为 int 的 max 函数，一个参数为 Test 的函数。
也就是说，在编译期间，就要识别调用模板函数的位置，知道使用了什么参数类型后，生成函数。
可以用cppinsights查看 https://cppinsights.io/

函数模板的具体化
函数名与参数列表、返回值都类似，具体化某个函数
