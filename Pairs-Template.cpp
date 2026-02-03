 /*Pair Template Class:
  Pair is a template class 
  Pair can store only tow datatypes.
  first & second are the data members of pair template class.*/

  //Program
  #include <iostream>
  #include <utility>
  using namespace std;
  class myDetails{
    string name;
    float marks;
    public:
    void setData(string n,float m){
        name=n;
        marks=m;
    }
    void show(){
        cout<<"\nName:"<<name<<"\nMarks"<<marks<<endl;
    }
    };
  int main() {
  myDetails m;
  m.setData("Mrunmai",70.55);
  pair<int,myDetails>p1(111,m);
  cout<<"ID:"<<p1.first;
  myDetails r=p1.second;
  r.show();
  pair<string,int>p2;
  p2=make_pair("Pune",412308);
  cout<<"Address:"<<p2.first<<" "<<"Pincode:"<<p2.second<<endl;
  return 0;
}

