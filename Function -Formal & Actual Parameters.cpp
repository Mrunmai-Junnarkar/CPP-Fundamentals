//Function Formal & Actual Parameters

#include <iostream>
using namespace std;
//Function Declaration
int numAdd(int,int); 

//formal Parameters are values which are passed in function().       
int numAdd(int x,int y){  
    return (x+y);
}
int main(){
    int n1=50,n2=20;

//Actual Parameters are values which are passed as arguments whiile calling function.      
    int sum=numAdd(n1,n2);
    cout<<"Addition :"<<sum<<endl;
    return 0;
}
/*
Output:
Addition :70
*/