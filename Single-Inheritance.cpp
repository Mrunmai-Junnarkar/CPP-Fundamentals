#include <iostream>
using namespace std;
// Base class (Parent)
class Father {
public:
    void fatherInfo() {
        cout << "I am the Father." << endl;
    }
};
                             
class Son : public Father { // Derived class (Child inherits Father)
public:
    void sonInfo() {
        cout << "I am the Son." << endl;
    }
};
int main() {
    Son s;
    s.fatherInfo(); // from base class
    s.sonInfo();    // from derived class
    return 0;
}
//Output:I am the Father.
//       I am the Son.
