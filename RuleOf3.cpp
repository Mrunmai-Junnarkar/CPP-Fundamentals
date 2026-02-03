
#include <iostream>
#include<string>
using namespace std;
class MyDetails{
   string name;
   int id;
   float *sal;
   
    public:
    MyDetails(){}
    MyDetails(string n,int i,float s){
        cout<<"Parametrized Constructor "<<endl;
        name=n;
        id=i;
        sal=new float;
        *sal=s;
    }
    void show(){
        cout<<"My Name:"<<name<<endl<<"ID:"<<id<<endl<<"My Salary:"<<*sal<<endl;
    }
    MyDetails(const MyDetails &m){
        cout<<"Copy constructor"<<endl;
        name=m.name;
        id=m.id;
        sal=new float(*m.sal);
    }
    MyDetails& operator=(const MyDetails &m){
        cout<<"Copy Assignment Operator"<<endl;
        if(this!=&m){
            delete sal;//free old memory from heap
        name=m.name;
        id=m.id;
        sal=new float(*m.sal);
        }
        return *this;
    }
     ~MyDetails() {
        delete sal;
        cout << "Destructor called" << endl;
    }
};
int main() {
    MyDetails m1("Mrunmai",1111,3.5);
    MyDetails m2=m1;//MyDetails &m=m1;
    m2.show();      //Initailize m2=m1
    MyDetails m3("Mrunmai",1111,2.5);
    m3.show();
    m3=m1;//Assign m3=m1(overwrite)
    m3.show();
    return 0;
}
