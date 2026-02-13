/*
Overriding in C++ is a type of polymorphism where a derived class redefines a function 
from its base class using the same name, return type, and parameters (i.e., the same function signature).

In overriding the c++ wiil check pointer type(means pointer content) and then execute the version.
*/
#include<iostream>
using namespace std;
class Base{
    public:
    void show(){
        cout<<"This is Base Class Version"<<endl;
    }
};
class Derived:public Base{
    public:
    void show(){
        cout<<"This is Derived Class Version"<<endl;
    }
};
int main(){
//base class ptr that points to Derived class obj
    Base *ptr;   
    Derived d;
    ptr=&d;
    ptr->show();   
    return 0;
}
/*
Output: This is Base Class Version
Here, in this program the base class show() means old version is run instead of Derived class version(latest)
because at a compile time pointer type is checked not object type so, the pointer is of base class type then base version is executed.
*/
