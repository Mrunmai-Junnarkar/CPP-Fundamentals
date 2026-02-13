/*Deep copy means creating copy of object by copying data of all data members as it is 
 actual seperate memory for dynammically allocated data members.
*
/*
#include <iostream>
#include<string>
using namespace std;
class MyDetails{
      public:
    string name;
    int *ptrid; 
    
    MyDetails(string n,int id){
         name=n;
//Created ptr variable in heap 
         ptrid=new int;  
//store values
         *ptrid=id;     
    }

    MyDetails(const MyDetails &obj){
        cout<<"\nIam copy constructor"<<endl;
        //obj.name="Rinkey";
        name=obj.name;
        ptrid=new int;
        *ptrid=*obj.ptrid;
       
    }
MyDetails& operator=(MyDetails &obj){
    cout<<"\nI am Copy Assignment Operator"<<endl;

    // self-assignment check
    if (this != &obj) 
        return *this;

    // free old memory that ptrid was pointing 
    delete ptrid;      

    ptrid = new int;
    *ptrid = *obj.ptrid;

    name = obj.name;

    return *this;
}

      ~MyDetails(){
        cout<<"\nI Delete everything";
        delete ptrid;
    }
    void display(){
        cout<<"My Deatils:"<<endl<<name<<endl<<*ptrid;
    }
};

int main() {
 MyDetails d1("Mrunmai",1111);
 d1.display();
 MyDetails d2(d1); //Copy constructor: Initializes a new object from an existing object.

 //d2.name="Sakshi";
   d2.display();
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
/*Parameterized or Dynamic Constructor in this using new keyword memory is allocated for char variable in heap section 
and then using strcpy() string is copied in heap in the form od array. */
    MyInfo(const char *n){
        name=new char[strlen(n)+1];
        strcpy(name,n);
    }
/*Copy constructor in this using new keyword new seperate memory is created in heap for new object and 
after that using strcpy() contents of existing object is copied into new object.*/
    MyInfo(const MyInfo &m){
        name=new char[strlen(m.name)+1];
         strcpy(name,m.name);
    }
//Member function to initialize the object.
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
MyInfo m2=m1;
m2.show();
m2.setData("Mrunmai");
m1.show();
m2.show();
/*
Output:
My Name:Mrunal
My Name:Mrunal
My Name:Mrunmai
*/
    return 0;
}