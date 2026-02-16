
/*Def: shared_ptr is a smart pointer in C++ that allows multiple pointers to share ownership of the same dynamically allocated object, 
and automatically deletes the object when the last shared_ptr owning it is destroyed.

Methods	        Descriptions
reset()  	Resets the std::shared_ptr to empty, releasing ownership of the managed object.
use_count()	Returns the current reference count, indicating how many std::shared_ptr instances share ownership.
unique()	Check if there is only one std::shared_ptr owning the object (reference count is 1).
get()	        Returns a raw pointer to the managed object. Be cautious when using this method.
swap(shr_ptr2)	swaps the contents (ownership) of two std::shared_ptr instances.

STACK                             HEAP
-----                             ----
p1 ─────┐
        │
p2 ─────┼──────────▶ [int: 10]   (Reference count = 3)
        │
p3 ─────┘
*/

#include <iostream>
#include<memory>
using namespace std;

int main() {
  shared_ptr<int>p1(new int(10));
  shared_ptr<int>p2;
  p2=p1;
  cout<<p1.use_count()<<endl;//2
  cout<<p2.use_count()<<endl;//2
  p1.reset();
  cout<<p1.use_count()<<endl;//0
  cout<<p2.use_count()<<endl;//1
  
  cout<<p1.get()<<endl;//0x0
  cout<<p2.get()<<endl;//0x3c5ff2b0
  
  return 0;
}
/*How create multiple objects in heap
shared_ptr<Rectangle> r1 = make_shared<Rectangle>(10, 5);
shared_ptr<Rectangle> r2 = make_shared<Rectangle>(4, 6);

cout << r1->area() << endl;
cout << r2->area() << endl;
*/
