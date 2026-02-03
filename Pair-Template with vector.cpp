//Pair Program using stl vector
 #include <iostream>
#include<vector>
using namespace std;
int main() {
   vector<pair<string,int>>v={{"Mrunsmi",1111},{"Rinky",1010}};
   v.emplace_back("Sakshi",2627);
   v.push_back({"Prateek",3687});
   for(pair<string,int> p:v){
       cout<<p.first<<" "<<p.second<<endl;
   }
    return 0;
}
