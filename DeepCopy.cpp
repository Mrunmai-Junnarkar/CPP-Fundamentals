//Deep Copy
#include <iostream>
#include<string>
using namespace std;
class MyDetails{
      public:
    string name;
    int *ptrid;       //Created ptr variable

    MyDetails(string n,int id){
         name=n;
         ptrid=new int;  //Created ptr variable in heap 
         *ptrid=id;     //store values
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
    if (this != &obj)  // self-assignment check
        return *this;

    delete ptrid;       // free old memory that ptrid was pointing 
    ptrid = new int;
    *ptrid = *obj.ptrid;
    name = obj.name;
   // obj.name="Rinkey";
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
