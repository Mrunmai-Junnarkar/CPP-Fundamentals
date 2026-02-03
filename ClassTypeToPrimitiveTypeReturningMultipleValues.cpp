
//Class Type to Primitive Type returning Multiple Values

#include <iostream>
using namespace std;
class complex {
    int a, b;
public:
    complex() {}
    complex(int x, int y) : a(x), b(y) {}
    void show() {
        cout << "a=" << a << " b=" << b << "i" << endl;
    }
    operator int() {        // conversion to int
        return a;
    }
    operator pair<int,int>() {   // conversion to pair
        return {a, b};
    }};
int main() {
    complex c(10, 20);
    c.show();
    int x = c;                 // uses operator int()
    cout << "x=" << x << endl;
    pair<int,int> p = c;       // uses operator pair<int,int>()
    cout << "Both values:(" << p.first << ", " << p.second << ")" << endl;
    return 0;
}
