#include <iostream>
#include <string>
#include <memory>

using namespace std;

void test(unique_ptr<string>& ptr) {
    if(!ptr) {
        cout<<"null"<<endl;
    } else {
        cout << "not null" << endl;
    }
}

int main() {
    unique_ptr<string> nn = make_unique<string>("11");
    unique_ptr<string> n = nullptr;
    auto nux = nullptr;
    test(nn);
    return 0;
}