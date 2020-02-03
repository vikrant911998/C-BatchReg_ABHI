#include<iostream>
#include<fstream>
using namespace std;


int main(){
    fstream file;

    file.open("example.txt",ios::in);

    string str;

    while(file){
        getline(file,str);

        cout<<str<<endl;
        // break;
    }

    file.close();

    return 0;
}