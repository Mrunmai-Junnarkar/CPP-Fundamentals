//Function Template:
//Program 
#include<iostream>
using namespace std;
template <class X,class Y>
X big(X a,Y b){
    if(a>b)
    return a;
    else
    return b;
}
int main(){
    cout<<big(10,5.55);
    return 0;
}
