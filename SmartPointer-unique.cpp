//Demostration of unique_ptr
#include <iostream>
//Definations of smart pointers are stored in <memory>.
#include <memory>

using namespace std;

void func(){
//unique pointer p1 which is pointing heap memory 
    unique_ptr<int>p1(new int(10));
//showing that address stored in pointer what value does it contains.
    cout<<*p1<<endl;
//creating one more unique pointer p2.
    unique_ptr<int>p2;
//tranfering existing pointer contents into newly created pointer p2 making existing one nullptr.
    p2=move(p1);
//showing that address stored in pointer what value does it contains.
    cout<<*p2<<endl;
/*May cause segmentation fault
     cout<<*p1<<endl;
*/
//To avoid segmentation fault error instead of directly dereferncing needed to check first by if statement.
if (p1 == nullptr)
    cout << "p1 is now empty\n";
}
int main(){
    func();
    return 0;
}
/*
10
10
p1 is now empty
*/

/*
unique_ptr is a smart pointer that ensures single ownership of a heap-allocated object 
and provides automatic memory deallocation.
ptr itself is a small object.
It usually contains a raw pointer inside.
The unique_ptr object lives on the stack.
The object it manages lives on the heap.
STACK                        HEAP
-----                        ----
unique_ptr P ───────────▶   Object

Multiple Objects in Heap
unique_ptr<Rectangle> r1 = make_unique<Rectangle>(10, 5);
unique_ptr<Rectangle> r2 = make_unique<Rectangle>(4, 6);

cout << r1->area() << endl;
cout << r2->area() << endl;

*/

/*
STACK                    HEAP
-----                    ----
r1  ───▶ nullptr
r2  ───────────────▶   Reactangle(2,5)

Note:
When using unique_ptr copy constructor and copy assignment operator is not allowed
because for example
Now both r1 and r2 “own” the same heap object
The object is still only one thing in memory
When r1 goes out of scope → delete runs
When r2 goes out of scope → delete runs again on the same memory
This is called double deletion → undefined behavior in C++:
Program may crash
Memory may be corrupted
Only move constructor & move assignment operator is allowed.
*/

/*
#include <iostream>
#include<memory>
using namespace std;
class Reactangle{
    int length;
    int breadth;
    public:
    Reactangle(int l,int b){
        length=l;
        breadth=b;
    }
    int area(){
        return length*breadth;
    }
};
int main() {
  unique_ptr<Reactangle>r1(new Reactangle(2,5));
  cout<<r1->area()<<" "<<"i'm First Pointer"<<endl;
  unique_ptr <Reactangle>r2;
  r2=move(r1);
   cout<<r2->area()<<" "<<"i'm Second Pointer"<<endl;
  return 0;
}
*/

