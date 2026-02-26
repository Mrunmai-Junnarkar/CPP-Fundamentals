/*
Accessing private data member of two different class using friend function
*/
#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    A(int x){a=x;}
    friend void show(A &obj1,B &obj2);
};
class B{
    int b;
    public:
    B(int y){b=y;}
    friend void show(A &obj1,B &obj2);
};
void show(A &obj1,B &obj2){
    cout<<"A class Data:"<<obj1.a<<endl;
    cout<<"B class Data:"<<obj2.b<<endl;

int sum = obj1.a + obj2.b;
    cout << "Sum of A and B: " << sum << endl;
}
int main(){
    A a1(10);
    B b1(10);
    show(a1,b1);
    return 0;
}

