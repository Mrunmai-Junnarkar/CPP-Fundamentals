/*🔷 Why Rule of Five is Needed

Because your class uses:
int* id;
Whenever a class manages a resource, you must define:

Function	           Reason
Destructor	           Free resource
Copy constructor	   Deep copy
Copy assignment	           Safe overwrite
Move constructor	   Fast transfer
Move assignment	           Fast overwrite

🔷 What Happens If You Skip One?
Missing	Result

Destructor	          Memory leak
Copy constructor	  Double delete
Copy assignment	          Memory leak
Move functions	          Slow copies
*/

#include <iostream>
#include <string>
using namespace std;

class MyDetails {
    string name;
    int id;
    float *sal;

public:
    // Default constructor
    MyDetails() : sal(nullptr) {}

    // Parameterized constructor
    MyDetails(string n, int i, float s) {
        cout << "Parameterized Constructor" << endl;
        name = n;
        id = i;
        sal = new float(s);
    }

    // Copy constructor
    MyDetails(const MyDetails &m) {
        cout << "Copy Constructor" << endl;
        name = m.name;
        id = m.id;
        sal = new float(*m.sal);
    }

    // Copy assignment operator
    MyDetails& operator=(const MyDetails &m) {
        cout << "Copy Assignment Operator" << endl;
        if (this != &m) {
            delete sal; // Free old memory
            name = m.name;
            id = m.id;
            sal = new float(*m.sal);
        }
        return *this;
    }

    // Move constructor
    MyDetails(MyDetails &&m) noexcept {
        cout << "Move Constructor" << endl;
        name = std::move(m.name);
        id = m.id;
        sal = m.sal;
        m.sal = nullptr; // Leave m in a safe state
    }

    // Move assignment operator
    MyDetails& operator=(MyDetails &&m) noexcept {
        cout << "Move Assignment Operator" << endl;
        if (this != &m) {
            delete sal; // Free old memory
            name = std::move(m.name);
            id = m.id;
            sal = m.sal;
            m.sal = nullptr; // Leave m in a safe state
        }
        return *this;
    }

    // Destructor
    ~MyDetails() {
        delete sal;
        cout << "Destructor called" << endl;
    }

    void show() {
        cout << "My Name: " << name << endl
             << "ID: " << id << endl
             << "My Salary: " << (sal ? *sal : 0) << endl;
    }
};

int main() {
    MyDetails m1("Mrunmai", 1111, 3.5);
    MyDetails m2 = m1; // Copy constructor
    m2.show();

    MyDetails m3("Mrunmai", 1111, 2.5);
    m3.show();

    m3 = m1; // Copy assignment operator
    m3.show();

    MyDetails m4 = std::move(m3); // Move constructor
    m4.show();

    MyDetails m5("Test", 999, 4.0);
    m5 = std::move(m4); // Move assignment operator
    m5.show();

    return 0;
}
