/*
Demonstration of operator overloading using increament operator(prefix & Postfix). 
*/
#include<iostream>
using namespace std;
class Integer{
    int i;
    public:
    Integer(){}
    Integer(int x){
        i=x;
    }
    void display(){
        cout<<"Integer:"<<i<<endl;
    }
    Integer operator++(){
        Integer temp;
//Pre-increment and then value get assign into new object.
        temp.i=++i;
        return temp;
    }
//Post-increment first value get assign than get increment.
     Integer operator++(int){
        Integer temp;
        temp.i=i++;
        return temp;
    }
};
int main(){
    Integer i1(5);
    Integer i2;
    i2=++i1;
    i1.display();
    i2.display();
    return 0;
}
/*
Output:
Pre-increment:
Integer:6
Integer:6

Post-increment:
Integer:6
Integer:5
*/