-/*Map
  Def:map is an associative container in the C++ Standard Template Library (STL) 
  that stores elements in the form of key–value pairs, where:
  Each key is unique
  Elements are stored in sorted order of keys
  Searching, insertion, and deletion take O(log n) time

  Features:
  Unique Keys: Duplicate keys are not allowed, if a key already exists, insertion is ignored or value is updated
  Automatic Sorting:Default sorting: ascending
  Dynamic Size:Size grows and shrinks automatically
  Iterator Support: Supports bidirectional iterators
  
  Usecases;
  Database-like Records
  Scheduling and indexing*/

  //Progarm
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m;//key:value
    m[111]="Mrunmai";
    m[132]="Sakshi";
    m[124]="Rinky";
    m[514]="Prateek";
    m.emplace(180,"Yash");
    m.insert({356,"Sakshi"});
    map<int,string>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<":"<<it->second<<endl;
    }
    m.erase(180);
     if(m.find(180)!=m.end()){
        cout<<"Found\n";
        }else{
        cout<<"Not Found";
            
        }
}
