//Custom Copy Constructor & Copy Assignment Operator

#include <iostream>
#include<string>
using namespace std;
class MyDetails{
   string name;
   int id;
   float sal;
   
    public:
    MyDetails(){}
    MyDetails(string n,int i,float s){
        cout<<"Parametrized Constructor "<<endl;
        name=n;
        id=i;
        sal=s;
    }
    void show(){
        cout<<"My Name:"<<name<<endl<<"ID:"<<id<<endl<<"My Salary:"<<sal<<endl;
    }
    MyDetails(const MyDetails &m){
        name=m.name;
        id=m.id;
        sal=m.sal;
    }
    MyDetails& operator=(const MyDetails &m){
        name=m.name;
        id=m.id;
        sal=m.sal;
        return *this;
    }
};
int main() {
    MyDetails m1("Mrunmai",1111,3.5);
    MyDetails m2=m1;//MyDetails &m=m1;
    m2.show();      //Initailize m2=m1
    MyDetails m3("Mrunmai",1111,2.5);
    m3=m1;//Assign m3=m1(overwrite)
    m3.show();
    return 0;
}
