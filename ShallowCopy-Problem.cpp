//Pointer(new ,delete)
 #include <iostream>
using namespace std;
class Shallow {
    int *data;
public:
    // Constructor
    Shallow(int value) {
        data = new int;
        *data = value;
    }
    void display() {
        cout << "Data: " << *data << endl;
    }
    // Destructor
    ~Shallow() {
        delete data;
        cout << "Destructor called\n";
    }
};
int main() {
    Shallow obj1(10);      // obj1 owns its memory
    Shallow obj2 = obj1;   // Shallow copy (pointer copied, not data)
    obj1.display();
    obj2.display();
    return 0;
}

