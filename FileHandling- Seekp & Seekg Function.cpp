//Seekp & Seekg Function Program

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    fstream file("MyFile.txt",ios::out|ios::in|ios::trunc);
    file<<"Hello User";
    file.seekp(6,ios::beg);
    file<<"Mrunmai";
    file.close();
    
    file.seekg(0,ios::beg);
    string data;
    getline(file,data);
    cout<<"File Contents:"<<data<<endl;
    file.close();
    
    return 0;
}
//Output: Original First Line: Hello User
                            //Hello Mrunmai 