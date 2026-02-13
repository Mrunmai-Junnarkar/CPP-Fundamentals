/*
A bit field allows a structure member to use only a certain number of bits, 
saving memory when storing small values like flags or counters.
*/
struct MyStruct {
// 'a' uses 3 bits
    unsigned int a : 3; 
// 'b' uses 5 bits
    unsigned int b : 5; 
};

#include <iostream>
using namespace std;

struct TrafficLight {
 // 1 bit: 0 = off, 1 = on
    unsigned int red   : 1;

// 1 bit: 0 = off, 1 = on 
    unsigned int yellow: 1;  

// 1 bit: 0 = off, 1 = on
    unsigned int green : 1;  
};
int main() {
    TrafficLight light;
    
// Turn on red light
    light.red = 1;
    light.yellow = 0;
    light.green = 0;

    cout << "Red: " << light.red << endl;
    cout << "Yellow: " << light.yellow << endl;
    cout << "Green: " << light.green << endl;
    return 0;
}
/*
Output:
Red: 1
Yellow: 0
Green: 0
*/