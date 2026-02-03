//Def: Type conversion is converting one data type into another.
//Implicit Conversion 
//Conversion is done automatically by the compiler.

#include<iostream>
using namespace std;
int main(){
    int n1=10;
    double n2;
    n1=n2;
    cout<<n2<<endl;//o/p=3.465
    
     int n3;
    double n4=10.5;
    n3=n4;
    cout<<n3<<endl;//o/p=10 /*compiler didnt converted double into int this type consversion casuse data loss*/
    return 0;
}
