/* -Deque:
  Def:A deque (Double Ended Queue) is a sequence container in the C++ Standard Template Library (STL) 
  that allows insertion and deletion of elements from both the front and the rear efficiently.
  Features:
  Fast insertion and deletion at both front and back
  Supports random access
  Dynamic size
  Faster access than list*/
  
 //Progarm
  #include <iostream>
#include<deque>
using namespace std;
int main() {
    deque <int>d={1,2,3,4,5};
    deque<int>::iterator it;
    d.push_front(0);
    d.push_back(6);
    for(it=d.begin();it!=d.end();it++){
        cout<<*(it);
    }
    cout<<endl;
    for(auto it=d.rbegin();it!=d.rend();it++){
        cout<<*(it);
    }
    d.pop_front();
    d.pop_back();
   
    return 0;
}

