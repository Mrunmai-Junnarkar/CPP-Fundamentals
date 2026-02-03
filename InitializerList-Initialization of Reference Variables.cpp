//Initialization of Reference Variables Program:
#include <iostream>
using namespace std;
class Demo {
private:
    int &ref;  
public:
    Demo(int &x) : ref(x) {}
    void display() {
        cout << "Reference value = " << ref << endl;
    }
};
int main() {
    int num = 50;
    Demo obj(num);   
    obj.display();
    return 0;
}
