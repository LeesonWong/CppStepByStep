#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void write() {
    fstream file;

    file.open("high_7_file.txt", ios::app);

    if (!file.is_open()) {
        cout << "File could not be opened" << endl;
    }

    for (int i = 0; i < 12; i++) {
        string temp = "Hello World!\t" + to_string(i + 1);
        file << temp << endl;
    }
    file.close();
}

void read() {
    fstream file;
    file.open("high_7_file.txt", ios::in);
    if (!file.is_open()) {
        cout << "File could not be opened" << endl;
        return;
    }

    string temp;
    while (getline(file, temp)) {
        cout << temp << endl;
    }
}


int main() {
    read();
    cout << "OVER" << endl;
}
