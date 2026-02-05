/*Lambda Function(Anonymous Function): A function with no name which is expanded at a compile time by  the compiler
  is known as lambda function. 
  It cannot be reuseable like normal function.
*/
/*Syntax:[//CaptureList ](//ParameterList)->//Return-type
         {//Function Body };
*/
/*The capture clause is specified inside square brackets []
It determines how external variables are accessed inside the lambda
There are three ways to capture external variables using the Lambda Capture clauses
*/
#include<iostream>
using namespace std;

//[=]: capture all external variables by value.(means function call by value) 
int main(){
int x=10,y=20;
[=]()->auto  //returnType is auto compiler determine
             
{ cout<<x<<" "<<y; }//Lambda Defination 
();//Lambda Calling
    return 0;
}
//Output:10 20

/*
//[&]: capture all external variables by reference.(means function call by Reference) 
[&]()->auto  
{cout<<x<<" "<<y<<endl;
x=100;
    cout<<x;
}
();
//Output:10 20 100

*/
/*
//Specific one value can be capturable
[&x,y]()->auto
{  cout<<x<<" "<<y;
x=100;    
   cout<<x<<" "<<y; 
}
();
//Output:10 20 100 20

*/
/*
//Not all value only one value can be capturable 
[=,&x]()->auto  
{  cout<<x<<" "<<y<<" "<<z<<endl;
x=100;
   cout<<x<<" "<<y<<" "<<z; 
}
();
//Output:10 20 30 100 20 30
*/
