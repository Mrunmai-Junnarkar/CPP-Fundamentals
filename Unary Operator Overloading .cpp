/*
Using operator overloading (Unary)
(If object is positive then convering it into negative into the another object). 
*/
#include<iostream>
using namespace std;
class Test{
    int n;
    public:
//Default Constructor.
    Test(){}
//Paramerized Constructor intializing data member.
    Test(int num){
        n=num;
    }
    void show(){
        cout<<"Value:"<<n<<endl;
    }
/*
Operator Function which has defination of operator 
what we are using with non primitive datatype.
*/
    Test operator-(){
        Test temp;
/*
Here, existing object contain value 5 so,-n make first that value negative and
then temp.n= due to this that negative value get store into the  new object.
*/
        temp.n=-n;
        return temp;
    }
};
int main(){
    Test t1(5);
    t1.show();
    Test t2;
//Here, operator() is called and value of t1 is assiged into t2.
    t2=-t1;
    t2.show();
    return 0;
}
/*
Output:
Value:5
Value:-5
*/

