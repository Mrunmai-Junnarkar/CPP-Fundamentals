//Initialization of Const Variables Program:
#include <iostream>
using namespace std;
class Demo {
private:

// const data member
    const int value;  

public:
// Initialize const member using initializer list
    Demo(int v) : value(v) {}

    void display() {
        cout << "Value = " << value << endl;
    }
    
    };
int main() {
// Pass value during object creation
    Demo obj(50);   
    obj.display();
    return 0;
}
