 /*-Tuple Template Class
  A tuple is a pre-defined template class in c++ that can hold multiple values of different data types 
  in a single object.
  similar to class & structure.
  Tuple works  at a compile time 
  Its elements can mutable but tuple size is static.
  It can accept any number of datatypes.
  get<index>() function is use to access elements of tuple.
  t=make_tuple(); function is used to insert values in tuple.*/

  //Program
  #include <iostream>
  #include<tuple>
  using namespace std;
  int main(){
    tuple<int,string,float>t1;
    t1=make_tuple(111,"Mrunmai",70.55);
    cout<<get<0>(t1)<<endl;
    cout<<get<1>(t1)<<endl;
    cout<<get<2>(t1)<<endl;
    
    auto t2=make_tuple("Pune",412308); //auto keyword that lets the compliar automatiocally deduce the 
    type of variables without manually using get<>();
    cout<<get<0>(t2)<<endl;
    cout<<get<1>(t2)<<endl;
    
    auto t3=make_tuple("Delta IOT");
    string company;
    tie(company)=t3; //tie() create reference to existing variables,,way to unpack tuple into seprate variables 
    cout<<company<<endl;
    return 0;
}
