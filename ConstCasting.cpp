/*Const Casting
The const_casting is used to change or manipulate the const behavior of the source pointer.
It means we can perform const const in two ways:
Setting a const pointer to non-pointer or deleting or removing the const from  a const pointer.*/

#include<iostream>
using namespace std;
void func(int*);
 void func(int* ptr){
     cout<<*ptr<<endl;
 }
int main(){
 const int n1=10;
 const int *n2=&n1;
 int *value=const_cast<int*>(n2);
 func(value);
    return 0;
}
