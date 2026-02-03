/* Function Calling by Reference 
->Function can directly Access & Modify the Original Variables 
because we passed alias/reference(another name) using & as Formal parameters.

Cannot refer to another variable later once reference is bounded it cannot be re-assigned.*/

#include <iostream>
using namespace std;
//formal Args are Reference variables
int numAdd(int &x,int &y,int &a, int &s){
a=x+y;
s=x-y;
return a,s;
}
int main(){
    int n1,n2,add,sub;
    cout<<"Enter 2 Numbers:"<<endl;
    cin>>n1;
    cin>>n2;
    numAdd(n1,n2,add,sub);
    cout<<"Function Calling By Reference Result:"<<add<<endl<<sub<<endl;
    return 0;
}
//Output:
//Function Calling By Reference Result:200

