One Class type to another class type

#include <iostream>
using namespace std;
class Product{
    int a,b;
    public:
    Product(int x,int y){
        a=x;b=y;
    }
    int getA(){
        return (a);
    }
    int getB(){
        return (b);
    }
};
class Item{
    int m,n;
    public:
    Item(){}
    Item(Product p){
        m=p.getA();
        n=p.getB();
    }
    void show(){
        cout<<"m"<<m<<"n"<<n<<endl;
    }
};
int main(){
    Item i;
    Product p(10,20);
    i=p;
    i.show();
    return 0;
}
