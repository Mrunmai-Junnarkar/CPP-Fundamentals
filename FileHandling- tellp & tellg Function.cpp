//tellp & tellg Function Program 

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    fstream file("MyFile.txt",ios::out|ios::in|ios::trunc);
    file<<"Hello User";
    cout<<"Write Pointer Position:"<<file.tellp()<<endl;
    
    file.seekp(0,ios::beg);
    
    char ch;
    //get method read 1 char & move pointer by 1 value
    file.get(ch);
    
    cout<<"Read Pointer Position:"<<file.tellg()<<endl;
    file.close();
    return 0;
}
