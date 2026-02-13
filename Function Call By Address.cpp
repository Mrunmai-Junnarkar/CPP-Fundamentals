/*
Function Call By Address 
The Function can access & modify the original variable because we pass the address & using pointer it can be modify.    
Complex and less safe     
Pointer Bugs: Risk of NULL,Dangling pointer, Wild pointer.
*/

#include <iostream>
using namespace std;
//Function Declaration
int numAdd(int*,int*);

//formal Args are Pointer variables
int numAdd(int *x,int *y){  
  return (*x+*y);
}
int main(){
    int n1,n2,result;
    cout<<"Enter 2 Numbers:"<<endl;
    cin>>n1;
    cin>>n2;
//passed Addresses as Function Parameters
    result=numAdd(&n1,&n2); 
    cout<<"Function Calling By Address Result:"<<result<<endl;
    return 0;
}
/*
Output:
Function Calling By Address Result : 200
*/

