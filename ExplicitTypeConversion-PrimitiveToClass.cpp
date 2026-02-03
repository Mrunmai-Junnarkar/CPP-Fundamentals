//Primitive to Class Type

#include <iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(){}
    complex(int k){
        a=k; b=0;
    }
    void show(){
        cout<<"a="<<a<<"b="<<b<<"i"<<endl;
    }
};
int main() {
  int x=5;
  complex c;
  c=x;
  c.show();
    return 0;
}
