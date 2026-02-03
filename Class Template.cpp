
//Class Template
#include <iostream>
using namespace std;
template<class T>
class Test{
    T value;
    public:
    void setValue(T v){
        value=v;
    }
    T getValue(){
        return value;
    }
};
int main() {
  Test<int>t1;
  t1.setValue(5);
  cout<<t1.getValue()<<endl;
  Test<float>t2;
  t2.setValue(5.5);
  cout<<t2.getValue()<<endl;
    return 0;
}
