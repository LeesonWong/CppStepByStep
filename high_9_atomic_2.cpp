#include <iostream>
#include <chrono>
#include <thread>
#include <vector>
#include <semaphore>

using namespace std;

counting_semaphore<2> sem(2);

void worker (int id) {
    sem.acquire();
    cout << "Worker\t" << id << "\t begin" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Worker\t" << id << "\t over" << endl;
    sem.release();
}

void testx (int id) {
    cout << "Testing\t" << id << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "Testing\t" << id << endl;
}

int main() {
    vector<thread> threads;
    for (int i = 0; i < 5; ++i) {
        threads.emplace_back(worker, i + 1);
    }
    int counter = 0;
    for (auto& value : threads) {
        value.join();
        cout << "------------" << counter++ << "------------" << endl;
    }
    return 0;
}
