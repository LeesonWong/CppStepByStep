#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <mutex>
#include <vector>

using namespace std;

mutex mu;
condition_variable cv;
bool flag = false;

void hold () {
    unique_lock<mutex> lock(mu);
    while (!flag) {
        cout << "hold" << endl;
        cv.wait(lock);
    }
}

void release () {
    unique_lock<mutex> lock(mu);
    this_thread::sleep_for(3s);
    cv.notify_all();
}

int main() {
    cout << "main- begin" << endl;

    vector<thread> threads;
    for (int i = 0; i < 10; ++i) {
        threads.emplace_back(hold);
    }

    release();

    for (thread& value : threads) {
        value.detach();
    }

    this_thread::sleep_for(5s);

    cout << "main- over" << endl;
}