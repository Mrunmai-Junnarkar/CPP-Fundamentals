//Returning multiple values from tuple
 #include <iostream>
 #include<tuple>
 using namespace std;
 tuple<int,int>addSub(int a,int b){
    return make_tuple(a+b,a-b);
 }
 int main(){
    int sum,diff,result;
    tie(sum,diff)=addSub(10,5);
    cout<<sum<<" "<<diff;
 }
 
