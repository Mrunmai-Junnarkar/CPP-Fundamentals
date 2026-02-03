//1. Write an inline function to calculate the cube of a number.
//->
#include <iostream>
using namespace std;
inline int cube(int n) {
    return n * n * n;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >>n;
    cout<<"Cube:"<<cube(n)<<endl;
    return 0;
}
/*2. Create an inline function to return the maximum of two numbers.
->
#include <iostream>
using namespace std;
inline int maxNum(int a, int b) {
    return (a > b) ? a : b;
}
int main() {
    int n1,n2;
    cout << "Enter two numbers: "<<endl;
    cin >> n1 >> n2;
    cout << "Maximum = " << maxNum(n1,n2) << endl;
    return 0;
}

3. Write an inline function to find the square root of a number.
->
#include <iostream>
using namespace std;
inline int square(int s) {
    return s*s;
}
int main() {
    int n;
    cout << "Enter Integer: "<<endl;
    cin >>n;
    cout << "Square-Root:" << square(n) << endl;
    return 0;
}

4. Demonstrate the difference between inline and normal functions using a simple example.
->
#include <iostream>
using namespace std;
inline int square(int x) {
    return x * x;
}
int normalFunc(int x) {
    return x * x;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Inline function: " << square(n) << endl;
    cout << "Normal function: " << normalFunc(n) << endl;
    return 0;
}

5. Create a class MathOp and define an inline function inside the class to multiply two
numbers.
->
#include <iostream>
using namespace std;
class MathOp {
public:
    int multiply(int a, int b) {
        return a * b;
    }};
int main(){
    MathOp m;
    int n1, n2;
    cout << "Enter two nums: ";
    cin >> n1>> n2;
    cout << "Multiplication = " << m.multiply(n1,n2) << endl;
    return 0;
}*/
