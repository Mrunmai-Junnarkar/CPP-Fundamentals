
/*
Function overloading means multiple functions with same name but behave differently with a different parameters.
In this type functions can be overloaded either by changing the number of arguments or
by changing the type of arguments.
*/

#include<iostream>
using namespace std;

int add(int x,int y){
    return x+y;
}
int add(int x,int y, int z){
    return x+y+z;
}
int main(){
    cout<<"Addition of 2 Integers:"<<add(5,5)<<endl;               
    cout<<"Addition of 3 Integers:"<<add(10,10)<<endl;
    return 0;
}
/*
Output:
Addition of 2 Integers:10
Addition of 3 Integers:20
*/

/*
why we need function overloading?
Function overloading allows us to use the same function name to perform similar operations on different types or different inputs.
*/
