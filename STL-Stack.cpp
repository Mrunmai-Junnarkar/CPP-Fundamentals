 /*-Stack:
  Def:A stack is a container adapter in the C++ Standard Template Library (STL) 
  that follows the LIFO (Last In, First Out) principle.
  Elements are inserted and removed only from the top of the stack.
  
  Advantages of STL Stack:
  Fast push and pop operations (O(1))
  Prevents misuse of data (restricted access)
 
  Disadvantages of STL Stack:
  No random access to elements
  Cannot traverse elements directly
  Only top element can be accessed
  No iterators available:It is designed to provide restricted access and strictly follow the LIFO principle.*/

//Program
#include <iostream>
#include<stack>
using namespace std;
int main() {
    stack<int>s;
    s.push(1);
    s.push(2);
    s.emplace(3);
    
     stack<int>s1;
     s1.swap(s);
     cout<<"\nfirst Stack Size:"<<s.size()<<endl;
     cout<<"Second Stack Size:"<<s1.size()<<endl;
     
      while(!s1.empty()){
         cout<<s1.top()<<" ";
         s1.pop();
     }
  return 0;
}

//Stack Overflow Condition:

/*Stack memory is full, so program crashes → Stack Overflow

| fun() |  ← Top
| fun() |
| fun() |
| fun() |
| fun() |
| fun() |
| fun() |
| fun() |
| fun() |
-----------
Stack limit reached ❌
Causes of Stack Overflow
Infinite or very deep recursion
Too many nested function calls
No proper base condition in recursion*/