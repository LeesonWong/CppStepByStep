#include <iostream>
#include <vector>

using namespace std;

class AA {
public:
    int age = 100;
};

vector<AA> GetAAList1 () {
    return vector<AA>;
}

vector<AA> GetAAList2 () {
    return vector<AA>();
}

int main() {
    auto res1 = GetAAList1();
    for (auto aa : res1) {
        cout << aa.age << endl;
    }

    auto res2 = GetAAList2();
    for (auto aa : res2) {
        cout << aa.age << endl;
    }
    return 0;
}