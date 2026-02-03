#include <iostream>
using namespace std;
class GrandFather {
public:
    void grandFatherInfo() {
        cout << "I am the Grandfather." << endl;
    }
};
class Father : public GrandFather {
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
int main() {
    Son s;
    s.grandFatherInfo();  // from GrandFather
    s.fatherInfo();       // from Father
    s.sonInfo();          // from Son
    return 0;
}

