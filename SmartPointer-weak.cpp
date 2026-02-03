/*Def:A weak pointer is a smart pointer that references an object managed by shared_ptr without affecting its reference count, used to prevent circular dependency and dangling pointers.

#include <iostream>
#include <memory>
using namespace std;
int main(){
    shared_ptr<int>p1(new int(10));
    cout<<*p1<<endl;
    weak_ptr<int>p2;
    p2=move(p1);
    cout<<"Reference Count after moving ownership:"<<p1.use_count()<<endl;
    return 0;
}*/

#include <iostream>
#include <memory>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    Rectangle(int l, int b) : length(l), breadth(b) {}
    int area() { return length * breadth; }
};

int main() {
    shared_ptr<Rectangle> P1(new Rectangle(10, 5));
    weak_ptr<Rectangle> P2(P1);

    cout << P1->area() << endl;
    cout << P2.use_count();
    return 0;
}
