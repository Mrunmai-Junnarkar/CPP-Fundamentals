/* Multimap:multimap is an associative container in the C++ Standard Template Library (STL) 
  that stores elements in key–value pairs, allowing multiple elements with the same key.
  note: No Direct Access Operator Cannot use [] operator*/

  //Program
   #include<iostream>
#include<map>
using namespace std;
int main(){
    multimap<int,string>m;//key:value
   m.insert({1111,"Mrunmai"});
   m.emplace(1111,"Mrunmai");
   m.emplace(1111,"Mrunmai");
   m.emplace(1111,"Mrunmai");
    map<int,string>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<":"<<it->second<<endl;
    }
  
}
