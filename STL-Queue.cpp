/* -Queue:
  Def:Queue is an STL container adaptor that follows FIFO order and allows insertion at the rear and deletion from the front.
  Features:
  No Iterators No Random access-
  STL queue does not support iterators
  Elements can only be accessed via front or back*/
//Program

#include <iostream>
#include<queue>
using namespace std;
int main() {
   queue<int>q;
   q.push(1);
   q.push(2);
   q.emplace(3);
   q.emplace(4);

   while(!q.empty()){
       cout<<q.front()<<" ";
       q.pop();
   }
    return 0;
}
