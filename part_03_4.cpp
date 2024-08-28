#include <string>
#include <vector>
#include <chrono>
#include <iostream>
#include <utility>
#include <typeinfo>

using namespace std;

void funcA () {
    vector<int32_t> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto it = v.begin(); it != v.end(); ) {
        if (*it % 2 == 0) {
            it = v.erase(it);
        } else {
            ++it;
        }
    }

    for (int32_t value : v) {
        cout << value << endl;
    }
}

void funcB () {

}

void funcC () {

}

void funcD () {

}


#define LENGTH 10

char* getString() {
    char* str = (char*) malloc(LENGTH);
    return str;
}

void funcE() {
    char* str = getString();
    str[4] = '\0';
    if(str == nullptr) {
        return;
    }
    printf("%d", strlen(str));
}


namespace A {
    namespace B {
        void functionA () {
            cout << "A::functionA" << endl;
        }

        void functionB () {
            cout << "B::functionB" << endl;
            ::funcE();
        }
    }
}

// ±éÀúÆ÷
int main() {
    A::B::functionB();
    return 0;
}