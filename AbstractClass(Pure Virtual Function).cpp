#include <iostream>
using namespace std;

class Shape {
protected:
    int sides;

public:
    // Constructor in abstract class
    Shape(int s) {
        sides = s;
        cout << "Shape constructor called" << endl;
    }

    // Pure virtual function
    virtual void draw() = 0;

    // Virtual destructor
    virtual ~Shape() {
        cout << "Shape destructor called" << endl;
    }
};

class Triangle : public Shape {
public:
    Triangle() : Shape(3) {   // calling abstract class constructor
        cout << "Triangle constructor called" << endl;
    }

    void draw() override {
        cout << "Drawing Triangle" << endl;
    }
};

int main() {
    Triangle t;
    t.draw();
    return 0;
}
/*Here in this program shape class is a abstract class due this we cannot create its object,
so to initialize the the data member of shape class we have to use initializer list in Triangle class 
constructor to make call to shape class constructor.

Note: Rule to remember (very important)

🔹 If a base class has a default constructor, it is called automatically.
🔹 If it does not, the derived class must explicitly call a base constructor.*/

