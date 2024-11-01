#include <iostream>
#include <chrono>
#include <thread>
#include <vector>
#include <semaphore>

using namespace std;

union Unit {
    uint32_t n;
    char c[4];
};

int main() {
    Unit x;
    x.n = 0x12345678;

    if(x.c[0] == 0x78) {
        cout<<"78"<<endl;
    } else if(x.c[0] == 0x12) {
        cout<<"12"<<endl;
    } else {
        cout<<"false"<<endl;
    }
}
