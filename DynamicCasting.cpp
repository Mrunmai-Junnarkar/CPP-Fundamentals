
//Syntax: dynamic_casting<new_datatype>(expression);

#include<iostream>
using namespace std;
class Base{
    public:
    virtual void message(){}
};
class Derived:public Base{
  public:  
};
int main(){
 Base *ptr=new Derived;
 Derived *pd=dynamic_cast<Derived*>(ptr);
 if(pd!=NULL)
     cout<<"Succesfull"<<endl;
     else
     cout<<"Failed"<<endl;
    return 0;
}
