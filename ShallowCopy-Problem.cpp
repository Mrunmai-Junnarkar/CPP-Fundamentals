/*
Shallow copy means creating copy of object by copying data of all data members as it is 
but not actual seperate memory for dynammically allocated data members.
*/
/*#include <iostream>
using namespace std;
class Shallow {
//Pointer variable
    int *data;
public:
// Dynamic constructor using new in heap memory is allocated for integer.
    Shallow(int value) {
        data = new int;
        *data = value;
    }
    void display() {
        cout << "Data: " << *data << endl;
    }
// Destructor and delete to deallocate heap memory relase object resources
    ~Shallow() {
        delete data;
        cout << "Destructor called\n";
    }
};
int main() {
    Shallow obj1(10);  
//Intializing new object by copying existing object values.    
    Shallow obj2 = obj1;   
    obj2.display();
    return 0;
}
*/

#include <iostream>
//Contains defination of strlen() & strcpy().
#include<cstring>
using namespace std;
class MyInfo{
//Char type pointer variable.
    char *name;
        public:
//Default Constructor. 
    MyInfo(){
        name=nullptr;
    }
/*Parameterized or Dynamic Constructor in this using new keyword memory is allocated for char variable in heap section and then using strcpy() string is copied in heap in the form od array. */
    MyInfo(const char *n){
        name=new char[strlen(n)+1];
        strcpy(name,n);
    }
//Copy Constructor coping the existing object data member contents into the new object .
    MyInfo(const MyInfo &m){
        name=m.name;
    }
    void setData(const char *n){
           strcpy(name,n);
    }
    void show(){
        cout<<"My Name:"<<name<<endl;
    }
//Destructor & delete to memory allocated in heap and release the object memory.
    ~MyInfo(){
        delete name;
    }
};
int main() {
MyInfo m1("Mrunal");
/*
Intializing new object by copying existing object values.
Here, due to this line existing object pointer variable contains address so,that address
get copy into the new object m2 instead of seperate memory.
*/    
MyInfo m2=m1;
m2.show();
/*
Output:My Name:Mrunal
free(): double free detected in tcache 2
Aborted
Reason:
Destructor of both objects trying to delete the same memory causing double deletion problem*/
m2.setData("Mrunmai");
m1.show();
m2.show();
/*
Output:
My Name:Mrunal
My Name:Mrunmai
My Name:Mrunmai
free(): double free detected in tcache 2
Aborted
Reason:
Any Changes made in one object can affect on the another object too beacuse m1 and m2 
objects pointers both are pointing to the same memory location in heap.
*/
    return 0;
}