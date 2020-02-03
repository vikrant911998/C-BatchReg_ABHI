#include<iostream>
#include<fstream>
using namespace std;


int main(){
    fstream file;

    file.open("example.txt",ios::app);

    string str;
    
    // while(){
        cout<<"Enter the Data to be saved"<<endl;
        // cin>>str;
        getline(cin,str);

        file << str <<endl;
    // }

    

    file.close();

    return 0;
}