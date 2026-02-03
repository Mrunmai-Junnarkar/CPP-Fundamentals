//Overload unary ++ operator to increase the value of an object’s integer data.
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
        temp.i=++i;
        return temp;
    }
     Integer operator++(int){
        Integer temp;
        temp.i=i++;
        return temp;
    }
};
int main(){
    Integer i1(5);
    Integer i2;
    i2=i1++;
    i1.display();
    i2.display();
    return 0;
}
