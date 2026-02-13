#include <iostream>
using namespace std;
// Base class (Parent)
class Father {
public:
    void fatherInfo() {
        cout << "I am the Father." << endl;
    }
};

// Derived class (Child inherits Father)                         
class Son : public Father { 
public:
    void sonInfo() {
        cout << "I am the Son." << endl;
    }
};
int main() {
    Son s;
// from base class
    s.fatherInfo(); 
// from derived class
    s.sonInfo();   
    return 0;
}
/*Output:
I am the Father.
I am the Son.
*/
