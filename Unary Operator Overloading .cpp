//Using unary operator Overloading (If object is positive then convert into negative value into the another object)
#include<iostream>
using namespace std;
class Test{
    int n;
    public:
    Test(){}
    Test(int num){
        n=num;
    }
    void show(){
        cout<<"Value:"<<n<<endl;
    }
    Test operator-(){
        Test temp;
        temp.n=-n;
        return temp;
    }
};
int main(){
    Test t1(5);
    t1.show();
    Test t2;
    t2=-t1;
    t2.show();
    return 0;
}

