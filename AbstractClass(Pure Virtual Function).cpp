/*
Pure virtual function is a function which is assign to 0 that means it does not have its own implementation.
When any class contains at list 1 pure vitrual or more than one functions in it that class is known as abstract class.
*/
#include <iostream>
using namespace std;
class Shape {
//Sides is the data member which is only accessible inside the same class and inside the derived class not from outside.
protected:
    int sides;

public:
/*
This is abstract class paramererized constructor 
use to initialize base class data member */
    Shape(int s) {
        sides = s;
        cout << "Shape constructor called" << endl;
    }

// Pure virtual function
    virtual void draw() = 0;

/*
Virtual destructor at runtime it will allow Derived call constructor to called first
instead of base class.
Reason:If Shape Destructor runs first than triangle destructor would not run
leading to incomplete cleanup.
*/
    virtual ~Shape() {
        cout << "Shape destructor called" << endl;
    }
};

class Triangle : public Shape {
public:
/*
Calling explicitliy abstract class constructor using initializer list to initialize data member of base class.
*/
    Triangle() : Shape(3) {   
        cout << "Triangle constructor called" << endl;
    }
//Implementation of pure virtual function
    void draw() override {
        cout << "Drawing Triangle" << endl;
    }
    ~Triangle(){
         cout << "Triangle destructor called" << endl;
    }
};

int main() {
//Base class pointer pointing to derived class object(Runtime).
//Here, Derived object is created in heap using new keyword.
    Shape *ptr=new Triangle();
    ptr->draw();
    delete ptr;
    /* 
    OR
     unique_ptr<Shape> ptr = make_unique<Triangle>();
    ptr->draw();
    */
    return 0;
}
/*
Output:
Shape constructor called
Triangle constructor called
Drawing Triangle
Triangle destructor called
Shape destructor called
*/

/*
Note: Rule to remember (very important)
🔹 If a base class has a default constructor, it is called automatically.
🔹 If it does not, the derived class must explicitly call a base constructor.
*/