/* Unordered Map:
  Def:unordered_map is an associative container in the C++ Standard Template Library (STL) 
  that stores elements in key–value pairs, but does not store them in any particular order.
  Implemented using a hash table
  Keys are unique
  Provides very fast average-time operations
  Direct Element Access*/
  //Program
   #include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,string>m;//key:value
   m.insert({1111,"Mrunmai"});
   m.emplace(1136,"Mrunmai");
   m.emplace(1137,"Mrunmai");
   m.emplace(1546,"Mrunmai");
    unordered_map<int,string>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<":"<<it->second<<endl;
    }
  
}

