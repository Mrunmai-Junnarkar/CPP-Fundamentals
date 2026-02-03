//Initialization of Const Variables Program:
#include <iostream>
using namespace std;
class Demo {
private:
    const int value;   // const data member
public:
    // Initialize const member using initializer list
    Demo(int v) : value(v) {}
    void display() {
        cout << "Value = " << value << endl;
    }
    
    };
int main() {
    Demo obj(50);   // Pass value during object creation
    obj.display();
    return 0;
}
