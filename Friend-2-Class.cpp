//Making two class friend 

#include <iostream>
using namespace std;
class Calculator;  // forward declaration
class Numbers {
private:
    int a, b;
public:
    Numbers() { 
        a = 5; 
        b = 15; 
    }
    // Making whole class Calculator a friend
    friend class Calculator;
};
class Calculator {
public:
    void add(Numbers obj) {
        cout << "Addition: " << obj.a + obj.b << endl;
    }
    void multiply(Numbers obj) {
        cout << "Multiplication: " << obj.a * obj.b << endl;
    }
};
int main() {
    Numbers n;
    Calculator c;
    c.add(n);
    c.multiply(n);
    return 0;
}
