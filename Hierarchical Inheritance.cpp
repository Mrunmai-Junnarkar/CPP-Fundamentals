#include <iostream>
using namespace std;
class Father {
public:
    void fatherInfo() {
        cout << "I am the Father." << endl;
    }
};

class Son : public Father {
public:
    void sonInfo() {
        cout << "I am the Son." << endl;
    }
};

class Daughter : public Father {
public:
    void daughterInfo() {
        cout << "I am the Daughter." << endl;
    }
};
int main() {
    Son s;
    Daughter d;
    cout << "--- Son Object ---" << endl;
    s.fatherInfo();
    s.sonInfo();
    cout << "\n--- Daughter Object ---" << endl;
    d.fatherInfo();
    d.daughterInfo();
    return 0;
}

