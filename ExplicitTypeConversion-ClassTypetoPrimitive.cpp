//Class Type to Primitive Type

 #include <iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(){}
    complex(int x,int y){
      a=x;b=y;
    }
    void show(){
        cout<<"a="<<a<<"b="<<b<<"i"<<endl;
    }
    operator int(){
        return(a);
    }
};
int main() {
  complex c(10,20);
  c.show();
  int x;
  x=c;
  cout<<"x="<<x<<endl;
    return 0;
}
