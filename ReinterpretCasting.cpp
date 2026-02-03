/*Reinterpret Casting :This type of conversion converts a pointer of some datatype into a pointer of another data type even if the data types before and after conversion are different
Note: It does not check if the pointer type and data pointed by the pointer is same or not.*/
//Syntax: reinterpret_casting<new_datatype>(expression); 

#include<iostream>
using namespace std;
int main(){
 int *ptr=new int(77);
 char *ch=reinterpret_cast<char*>(ptr);
 cout<<"Value of ptr:"<<*ptr<<endl;
 cout<<"Value of ch:"<<*ch<<endl;
 cout<<"address of ptr:"<<ptr<<endl;
 cout<<"address of ch:"<<ch<<endl;
    return 0;
}
