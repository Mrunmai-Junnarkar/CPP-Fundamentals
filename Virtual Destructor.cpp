#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {
        cout << "Base Destructor" << endl;
    }
};

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived Destructor" << endl;
    }
};

int main() {
    Base* ptr = new Derived();
    delete ptr;   // ✅ correct place
}

//Explaination:-Inside ~Derived(), statements execute top-to-bottom.delete ptr first calls the pointed object’s destructor, then frees its memory.

/*#include <iostream>
using namespace std;

// Base class
class Base {
public:
    // Virtual destructor ensures derived destructors are called
    virtual ~Base() {
        cout << "Base Destructor" << endl;
    }
};

// Derived class
class Derived : public Base {
    int* data;   // dynamic memory owned by Derived
public:
    // Constructor allocates memory
    Derived() {
        data = new int(10);
        cout << "Derived Constructor" << endl;
    }

    // Destructor frees memory
    ~Derived() {
        delete data;      // free memory
        data = nullptr;   // good practice
        cout << "Derived Destructor" << endl;
    }
};

int main() {
    // Create Derived object through a Base pointer
    Base* ptr = new Derived();

    // Delete the object properly
    delete ptr;  // calls Derived destructor first, then Base destructor

    return 0;
}*/


