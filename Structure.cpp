//Structure in C++ is a user-defined data type that allows you to group different types of variables under a single name.
#include<iostream>
using namespace std;
struct Reactangle{

    int length;
    int breadth;


    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*length+2*breadth;
    }
    void input(){
        cout<<"Enter Length:";
        cin>>length;
        cout<<"Enter Breadth:";
        cin>>breadth;
    }
    void display(){
        cout<<"Area Of Reactangle:"<<area()<<endl;
        cout<<"Perimeter of Reactangle:"<<perimeter()<<endl;
    }
};
int main(){
    Reactangle r;
    r.input();
    r.display();
    return 0;
}

/*Structure Padding

#include<iostream>
using namespace std;
struct Demo{
char name;//1
char address;//1
int pincode;//4
}s;
int main(){
cout<<"Size of Structure:"<<sizeof(s)<<endl;//Output:8??
return 0;
}

here , size of structure is 8 not 6 because the processor is of 32 bit and therefore it reads 4 bytes.
Note: In structure padding we save the number of CPU cycles by using the concept of structure padding but on the other hand it consumes more memory(memory wasted). 
*/

/*Structure Packing

#include<iostream>
using namespace std;
#pragma pack(1)
struct Demo{
char name;//1
char address;//1
int pincode;//4
}s;
int main(){
cout<<"Size of Structure:"<<sizeof(s)<<endl;//Output:6
return 0;
}

here, size of structure is 6 as expected because we used #pragma pack() special directive used for turn on off certain features.
Note:In this packing concept we save cpu memory but the cpu cycles are wasted.
*/

