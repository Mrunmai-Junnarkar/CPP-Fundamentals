/*Function Call By Address 
->  The Function can access & modify the original variable 
      because we pass the address & using pointer it can be modify.
     
      Complex and less safe
       
      Pointer Bugs: Risk of NULL,Dangling pointer, Wild pointer.*/

#include <iostream>
using namespace std;
int numAdd(int*,int*);//Function Declaration

int numAdd(int *x,int *y){   //formal Args are Pointer variables
  return (*x+*y);
}
int main(){
    int n1,n2,result;
    cout<<"Enter 2 Numbers:"<<endl;
    cin>>n1;
    cin>>n2;
    result=numAdd(&n1,&n2);  //passed Addresses as Function Parameters
    cout<<"Function Calling By Address Result:"<<result<<endl;
    return 0;
}
//Output:Function Calling By Address Result:200

