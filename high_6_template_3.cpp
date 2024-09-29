#include "high_6_template_public/high_6_template_public.h"

template<typename T1, typename T2>
auto funcx(T1 x, T2 y) -> decltype(x+y) {
    decltype(x+y) temp = x + y;
    return temp;
}


int main() {
    // int a = 10;
    // int b = 20;
    // SwapX(a, b);

    int i = 10;
    char c = 3;
    auto res = funcx(i , c);
    std::cout << res << std::endl;
}