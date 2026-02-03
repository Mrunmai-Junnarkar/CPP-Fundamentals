//Program to add 2 objects in 3 object using Friend function binary operator overloading
#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
    demo(){    //Default Constructor
        
    }
    demo(int a,int b){ //Parameterized Constructor
       this->a=a;      //this Pointer
       this->b=b;
    }
    void show(){
        cout<<"\n"<<a<<"\n"<<b<<endl;
    }
    friend demo operator +(demo &d,demo &dd); //Operator Friend Function
};
demo operator +(demo &d,demo &dd){ //Friend Function Defination
    demo temp;
    temp.a=d.a+dd.a;
    temp.b=d.b+dd.b;
    return temp;
}
int main(){
    demo d1(5,5),d2(10,10);
    demo d3;
    d3=d1+d2;
    d3.show();
    return 0;
}
