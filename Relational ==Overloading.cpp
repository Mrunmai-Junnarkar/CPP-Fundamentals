//Overload the relational == operator to check object values are equal or not.
#include<iostream>
using namespace std;
class Point{
    int r;
    public:
   Point(int ratio){
       r=ratio;
   }
   bool operator==(const Point& p){
       if(r==p.r)
       return true;
       else
       return false;
  
   }
};
int main(){
    Point p1(5);
    Point p2(5);
    Point p3(10);
    
    if(p1==p2)
    cout<<"p1 is equal to p2"<<endl;
    else
    cout<<"p1 is not equal to p2"<<endl;
    if(p1==p3)
    cout<<"p1 is equal to p3"<<endl;
    else
    cout<<"p1 is not equal to p3"<<endl;
    return 0;
}

