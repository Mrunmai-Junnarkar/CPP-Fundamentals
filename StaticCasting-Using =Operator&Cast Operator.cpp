//Syntax: static_casting<new_datatype>(expression);
//using assignment operator
#include<iostream>
using namespace std;
int main(){
   float n1=5.55 ,n2=10.5;
   int result;
   result=(float)n1+n2;//conversion using assigment operator
   cout<<result<<endl;
   
//using cast operator
   float add=n1+n2;
   result=static_cast<int>(add);
   cout<<result<<endl;//o/p=16
    return 0;
}
Usecase: we need static conversion  to avoid data loss and get accuracy and type safty.
