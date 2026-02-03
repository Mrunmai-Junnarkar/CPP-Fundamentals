/*Def: Deep copy  is a copy of an object where fully the values of data members are copied,
with actual separate memory for dynamically allocated data.

Note:Changes made to one object do not affect the other because a custom copy constructor is used.*/

//Deep Copy with explicit copy constructor

#include<iostream>
 using namespace std;
 class Deep{
     int a,b;
     int *p;
     public:
     Deep(){}
     Deep(int x,int y,int z){
         a=x;b=y;
         p = new int;   // allocate memory
        *p = z;        // store value
     }
     void display(){
         cout<<"Data:"<<a<<endl<<b<<endl<<*p<<endl;
     }
     Deep(Deep &d){
         a=d.a;
         b=d.b;
         p=new int;
         *p=*(d.p);
     }
     ~Deep(){
         delete p;
     }
 };
 int main(){
     Deep d1(10,20,30);
     d1.display();
     Deep d2=d1;
     d2.display();
     return 0;
 }
