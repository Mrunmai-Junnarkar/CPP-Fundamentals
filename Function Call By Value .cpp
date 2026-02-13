/*
Function Call By Value 
A Copy of actual value is passed to the function so,the changes made inside the function do not affect the original variables
Cannot Return Multiple Values
Original Data Not Modified.
*/

#include <iostream>
using namespace std;
//Function Declaration
int numAdd(int,int);

{//formal Args are ordinary variables
int numAdd(int x,int y)
    int sum=x+y;
// Only 1 value is Returned
    return sum; 
}
int main(){
    int n1,n2,result;
    cout<<"Enter 2 Numbers:";
    cin>>n1;
    cin>>n2;
//passed Actual Parameters
    result=numAdd(n1,n2);
    cout<<"Function Calling By Value Result:"<<result<<endl;
    return 0;
}

/*Output:
Function Calling By Value Result: 20
*/

