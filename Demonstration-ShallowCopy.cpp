Def: A shallow copy is a copy of an object where only the values of data members are copied,
but not actual separate memory for dynamically allocated data.

Note: Shallow copy copies only pointer variable not actual data .
      Any modifications on one object can affect another object.
 
//Shallow Copy with explicit copy constructor in program

 #include<iostream>
 using namespace std;
 class Shallow{
     int a,b;
     public:
     Shallow(int x,int y){
         a=x; b=y;
     }
     void display(){
         cout<<"Data:"<<a<<b<<endl;
     }
     Shallow(Shallow &s){
         a=s.a;
         b=s.b;
     }
 };
 int main(){
     Shallow s1(10,20);
     s1.display();
     Shallow s2=s1;
     s2.display();
     return 0;
 }
