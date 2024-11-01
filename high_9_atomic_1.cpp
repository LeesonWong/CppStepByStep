#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <mutex>
#include <vector>

using namespace std;

atomic<int> atomicInt(0);
// int atomicInt = 0;

void add() {
    for (int i = 0; i < 100000; ++i) {
        atomicInt++;
    }
}

int main() {
    vector<thread> threads;
    for (int i = 0; i < 10; ++i) {
        threads.emplace_back(add);
    }

    for (auto &t: threads) {
        t.detach();
    }

    this_thread::sleep_for(4s);
    cout << atomicInt << endl;
    cout << "OVER" << endl;
}
