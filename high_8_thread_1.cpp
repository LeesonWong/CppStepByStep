#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;

void say() {
    while (true) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        cout << "This is " << std::this_thread::get_id() << endl;
    }
}

class MyThread {
public:
    string name;

    void operator()(string str) {
        this->name = str;
        while (true) {
            std::this_thread::sleep_for(std::chrono::seconds(1));
            cout << this->name << " is " << std::this_thread::get_id() << endl;
        }
    }
};

int main() {
    // thread t(say);
    // t.detach();
    MyThread th;
    thread t(th, "NewThread");
    t.detach();

    while (true) {
        cout << "Main " << std::this_thread::get_id() << endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}
