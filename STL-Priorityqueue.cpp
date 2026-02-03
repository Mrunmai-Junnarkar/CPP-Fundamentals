 /*-Priority_queue:
  Def:In C++, priority_queue is a container adaptor in the Standard Template Library (STL) 
  that provides constant-time access to the largest (or highest-priority) element.
  It is implemented internally using a heap (by default, a max heap).
  Features:
  Automatic Sorting
  Does not support iterators*/

  //Program
   #include <iostream>
#include<queue>
using namespace std;
int main() {
   priority_queue<int>q;
   q.push(1);
   q.push(0);
   q.emplace(10);
   q.emplace(4);
   while(!q.empty()){
       cout<<q.top()<<" ";
       q.pop();
   }
   cout<<endl;
    priority_queue<int,vector<int>,greater<int>>q1;
   q1.push(1);
   q1.push(0);
   q1.emplace(10);
   q1.emplace(4);
   while(!q1.empty()){
       cout<<q1.top()<<" ";
       q1.pop();
   }
    return 0;
}
