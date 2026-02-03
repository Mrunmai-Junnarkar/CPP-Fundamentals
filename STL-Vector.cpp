/*-Vector:
  Def:In C++, a vector is a dynamic array provided by the Standard Template Library (STL).
  It can store elements of the same data type, automatically resizes itself, and allows random access to elements.

  Features:
  Dynamic Size:Automatically grows or shrinks when elements are added or removed.
  Contiguous Memory Allocation:Elements are stored in continuous memory locations (like arrays).
  Random Access:Elements can be accessed using index.
  Automatic Memory Management:No need to manually allocate or deallocate memory.
  //Program Using Vector class Functions:*/
  #include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>v; 
    vector<int>v1={3,5,2,4,6,7,6};
    vector<int>v2(3,10);
    v2.insert(v2.begin()+2,100);
    cout<<"Printing Values Of Vector Using For Loop:"<<endl;
    for(int val:v2){
        cout<<val<<" ";
    }
    
       vector<int>v3(v1);
    cout<<"\nInitializaing 1 vector into another vector:";
     for(int n:v3){
        cout<<n<<" ";
    }
    v.push_back(1);
    v.push_back(2);
    v.push_back(10);
    v.push_back(13);
    v.push_back(15);
    v.push_back(110);
    v.pop_back();
    v.erase(v.begin()+2);//10=>13
    v.erase(v.begin()+2,v.begin()+4);
    cout<<"\nIndex Value:"<<v[2]<<endl;
    cout<<"Size of Vector:"<<v.size()<<endl;
    cout<<"Capacity of Vector:"<<v.capacity()<<endl;
    cout<<"Front Of Vector:"<<v.front()<<endl;
    cout<<"Back of Vector:"<<v.back()<<endl;
    cout<<"Check Vector is Empty Or Not:"<<v.empty()<<endl;//0=true
    
    
    return 0;
}

