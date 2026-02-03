//Friend Function accessing private data members of single class

#include <iostream>
using namespace std;
class Number {
private:
    int a, b;
public:
    // function to take input
    void input() {
        cout << "Enter two numbers: ";
        cin >> a >> b ;
    }
                                  
    friend void add(Number obj);   // declaring friend function
};
void add(Number obj) {           // friend function definition

    int sum = obj.a + obj.b ;   // can access private members
    cout << "Sum = " << sum << endl;
}
int main() {
    Number n;
    n.input();
    add(n);
    return 0;
}
