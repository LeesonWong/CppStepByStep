#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <mutex>

using namespace std;


mutex m;
int counter = 0;

void increase(int loop) {
    for (int i = 0; i < loop; i++) {
        m.lock();
        counter++;
        m.unlock();
    }
}

int main() {
    thread t1(increase, 100000);
    thread t2(increase, 100000);

    t1.detach();
    t2.detach();

    this_thread::sleep_for(chrono::seconds(3));
    cout << counter << endl;
}