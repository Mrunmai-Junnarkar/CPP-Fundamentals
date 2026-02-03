
/* **Diamond Problem in Multiple Inheritance**
Defination:Diamond problem is also known as diamond of death or virtual base class or virtual inheritance
The diamond problem in C++ occurs when a class inherits from two classes that both inherit from the same base class, causing ambiguity and duplicate copies of the base class.
Explanation:❌ What is the problem?
Class D contains two copies of A
One from B
One from C
Compiler doesn’t know which x you are referring to
D
├── B ── A
└── C ── A   (two A objects)


Solution:
class B : virtual public A {
};

class C : virtual public A {
};
D
├── B
├── C
└── A   (single shared A)*/


#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A" << endl;
    }
};

class B : public A {
};

class C : public A {
};

class D : public B, public C {
};

int main() {
    D obj;
    // obj.show();   // ❌ ERROR: ambiguous
    obj.B::show();  // ✔ OK
    obj.C::show();  // ✔ OK
    return 0;
}
