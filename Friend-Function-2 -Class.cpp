//Friend Function accessing private data members of 2 classes:

#include <iostream>
using namespace std;
class B;   // forward declaration
class A {
private:
    int x;
public:
    void input() {
        cout << "Enter value for x: ";
        cin >> x;
    }

    friend void add(A, B);  // friend function
};
class B {
private:
    int y;
public:
    void input() {
        cout << "Enter value for y: ";
        cin >> y;
    }
    friend void add(A, B);  // friend function
};
// friend function definition
void add(A obj1, B obj2) {
    cout << "Sum = " << obj1.x + obj2.y << endl;
}
int main() {
    A a;
    B b;
    a.input();
    b.input();
    add(a, b);
    return 0;
}

