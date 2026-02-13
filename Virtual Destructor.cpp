/*
Demonstration of virtual destructor 
*/
#include <iostream>
using namespace std;
class Base {
public:
// Virtual destructor ensures derived destructors are called
    virtual ~Base() {
        cout << "Base Destructor" << endl;
    }
};
class Derived : public Base {
// dynamic memory owned by Derived
    int* data; 
public:
// Constructor allocates memory in heap and at the  same time initialize data member. 
    Derived() {
        data = new int(10);
        cout << "Derived Constructor" << endl;
    }

//Inside ~Derived(), statements execute top-to-bottom.delete ptr first calls the pointed object’s destructor, then frees its memory.
    ~Derived() {
// free memory
        delete data;  
// good practice
        data = nullptr;   
        cout << "Derived Destructor" << endl;
    }
};
int main() {
// Create Derived object through a Base pointer
    Base* ptr = new Derived();
// Delete the object properly
// Calls Derived destructor first, then Base destructor
    delete ptr;  
    return 0;
}
/*
Output:
Derived Constructor
Derived Destructor
Base Destructor
*/

