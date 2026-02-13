/*
Using operator overloading(Binary)adding two objects data and storing the  sum od those
objects  into the third object.
*/
#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
 //Default Constructor.
    demo(){}
 //Parameterized Constructor to initialize data members.
    demo(int a,int b){
//this Pointer means current or calling object.
       this->a=a;      
       this->b=b;
    }
    void show(){
        cout<<"\n Num1:"<<a<<"\n Num2:"<<b<<endl;
    }
//Declaration Operator Friend Function which is non-member function.
    friend demo operator +(demo &d,demo &dd); 
};
//Defination of friend function.
//&d &dd are the reference of two existing object.
demo operator +(demo &d,demo &dd){ 
/*temp variable stores the sum and then returns to the calling object get destroyed when
function is finished.*/
    demo temp;
    temp.a=d.a+dd.a;
    temp.b=d.b+dd.b;
    return temp;
}
int main(){
    demo d1(5,5),d2(10,10);
//Third object created using default constructor.
    demo d3;
//Here,d3 is now existing object and the sum of d1 and d2 data members is store in it.
    d3=d1+d2;
    d3.show();
    return 0;
}
/*
Output:
Num1:15
Num2:15
*/
