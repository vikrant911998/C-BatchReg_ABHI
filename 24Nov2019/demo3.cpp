#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"Enter the name"<<endl;
    // cin>>name;  ->one word input.
    getline(cin,name);  //->multi word input.

    cout<<"Name is "<<name<<endl;

    return 0;
}