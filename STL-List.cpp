/* -List:
 Def:list is a doubly linked list container in the C++ Standard Template Library (STL).
 It stores elements in non-contiguous memory and allows efficient insertion and deletion at any position.
 
 Features:
 Fast insertion and deletion at any position
 Size can grow or shrink dynamically
 No random access (cannot use [] or .at())*/
 
 //Program 
   #include <iostream>
#include<list>
using namespace std;
int main() {
    list<int>l={1,2,3,4,5};
    list <int>::iterator it;
    l.push_front(0);
    l.push_back(6);
    for(it=l.begin();it!=l.end();it++){
        cout<<*(it);
    }
    cout<<endl;
    for(auto it=l.rbegin();it!=l.rend();it++){
        cout<<*(it);
    }
    l.pop_front();
    l.pop_back();
   
    return 0;
}
