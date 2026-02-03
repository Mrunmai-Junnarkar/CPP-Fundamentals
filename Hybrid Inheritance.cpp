#include <iostream>
using namespace std;
class Father {
public:
    void fatherInfo() {
        cout << "I am the Father." << endl;
    }
};
class Mother {
public:
    void motherInfo() {
        cout << "I am the Mother." << endl;
    }
};
class Child1 : public Father {
public:
    void child1Info() {
        cout << "I am the First Child." << endl;
    }
};
class Child2 : public Mother, public Child1 {
public:
    void child2Info() {
        cout << "I am the Second Child." << endl;
    }
};
int main() {
    Child2 c;
    c.fatherInfo();   // from Father → Child1 → Child2
    c.motherInfo();   // from Mother
    c.child1Info();   // from Child1
    c.child2Info();   // from Child2

    return 0;
}
