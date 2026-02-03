//Function Formal & Actual Parameters

#include <iostream>
using namespace std;
int numAdd(int,int);         //Function Declaration
int numAdd(int x,int y){   //formal Parameters
    return (x+y);
}
int main(){
    int n1=50,n2=20;       //Actual Parameters
    int sum=numAdd(n1,n2);
    cout<<"Addition :"<<sum<<endl;
    return 0;
}
