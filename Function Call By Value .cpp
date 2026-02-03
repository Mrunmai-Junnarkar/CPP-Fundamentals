/*Function Call By Value 
-> A Copy of actual value is passed to the function 
     so,the changes made inside the function do not affect the original variables
    
     Cannot Return Multiple Values

     Original Data Not Modified.*/

#include <iostream>
using namespace std;
int numAdd(int,int);//Function Declaration

int numAdd(int x,int y){//formal Args are ordinary variables
    int sum=x+y;
    return sum; // Only 1 value is Returned
}
int main(){
    int n1,n2,result;
    cout<<"Enter 2 Numbers:";
    cin>>n1;
    cin>>n2;
    result=numAdd(n1,n2);//passed Actual Parameters
    cout<<"Function Calling By Value Result:"<<result<<endl;
    return 0;
}
//Output:Function Calling By Value Result:20

