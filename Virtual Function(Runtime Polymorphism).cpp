/* **Virtual Function**
->A Virtual function is a function declared using virtual keyword in base class
 so, derived class version get priority at a runtime.
->In this we create base class pointer that points to the derived class object.
->In case of the virtual function  c++ wiil check object type instead of pointer content and then execute the correct version.
->vptr is per object and vtable is per class is create internally the compiler.
->Depending on which class object is create that objects vtable address is stored in the vptr,
and then it start pointing to taht vtable 
->vtable contents address on how many virtual functions are present in the class.
->vtables are created by the compiler at compile time and placed in memory before program execution;
 vptrs are initialized at runtime during object construction.
Diagram of Base class pointer and derived class object .(Base *ptr=new Derived;)
Stack:                      Heap:
+-------------------+       +------------------------+
| Base* ptr         | ----> | Base sub-object        |
| (address)         |       +------------------------+
+-------------------+       | Derived sub-object     |
                            +------------------------+

Real world Example-
Remote Control (Base*)
        |
        v
TV / AC / Fan (Derived)
----------------------------------------------------------------
Static Binding:
Pointer Type → Function

Dynamic Binding:
Pointer → Object → vptr → vtable → Function

In static binding, the compiler resolves function calls at compile time using the pointer type, 
while in dynamic binding, the call is resolved at runtime using the object’s vtable, 
which reflects the actual object type.*/



#include<iostream>
using namespace std;
class Base{
    public:
    virtual void show(){
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
    Base *ptr;//base class ptr that points to Derived class obj
    Derived d;
    ptr=&d;
    ptr->show();//Output:This is Derived Class Version //stactic 
    return 0;
    
    /*OR
    Base *ptr=new Derived;//Output:This is Derived Class Version //Dynamic
    d.show();*/
}

