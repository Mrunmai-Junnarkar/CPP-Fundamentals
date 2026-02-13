/*
Union is a user-defined data type that allows different data types to share the same memory location, 
but only one value can be stored at a time.
*/

#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
    char c;
};

int main() {
    Data d;

    d.i = 10;
    cout << "i = " << d.i << endl;

    cout << "f = " << d.f << endl;
    cout << "c = " << d.c << endl;

    return 0;
}

/*
/*
Output:
i = 10
f = 1.4013e-44
c = 

Only the last written member of a union should be read.
Reading any other member gives:
Garbage value
Same-looking value
*/

