#include <iostream>
using namespace std;
// Base class 1
class Father {
public:
    void fatherInfo() {
        cout << "I am the Father." << endl;
    }
};
// Base class 2
class Mother {
public:
    void motherInfo() {
        cout << "I am the Mother." << endl;
    }
};
// Derived class (inherits from both Father and Mother)
class Child : public Father, public Mother {
public:
    void childInfo() {
        cout << "I am the Child." << endl;
    }
};
int main() {
    Child c;
// from Father
    c.fatherInfo();  
// from Mother
    c.motherInfo(); 
// from Child
    c.childInfo();  
    return 0;
}
