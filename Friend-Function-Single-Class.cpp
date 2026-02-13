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
        cin >> a >> b ;}
// declaring friend function                           
    friend void add(Number obj);   
};
// friend function definition
void add(Number obj) {   
// can access private members
    int sum = obj.a + obj.b ;   
    cout << "Sum = " << sum << endl;
}
int main() {
    Number n;
    n.input();
    add(n);
    return 0;
}
/*
Output:
Enter two numbers: 5
5
Sum = 10
*/