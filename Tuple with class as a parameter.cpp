//Program of tuple class with class as a parameter
#include <iostream>
#include <tuple>
using namespace std;
class A {
public:
    int x;
    A(int v=0): x(v) {}
};
class B {
public:
    int y;
    B(int v=0): y(v) {}
};
int main() {
    A a(10);
    B b(20);
    tuple<A, B> t(a, b);
    cout << get<0>(t).x << " ";  // Access A's x
    cout << get<1>(t).y;        // Access B's y
    return 0;
}
