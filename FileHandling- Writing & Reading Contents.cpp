 Writing & Reading Contents in File

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream outFile("MyFile.txt");
    outFile<<("This is My First Line In File"); 
    outFile.close();
    
    string line;
    ifstream inFile("MyFile.txt");
    cout<<"Reading First Line From File....";
    
    if(getline(inFile,line)){
    cout<<line<<endl;
    }
    
    inFile.close();
    return 0;
}
