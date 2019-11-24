#include<iostream>
using namespace std;

int main(){
    string name="Tom Clancy";
    char name1[]="";
    // cout<<name.at(9)<<endl;
    // cout<<name.length()<<endl;
    // cout<<name.append(" is")<<endl;
    // cout<<name<<endl;

    cout<<name.size()<<endl; //same as length.
    // cout<<name.compare("Hello")<<endl;
    cout<<name.compare(name)<<endl;
    // name.copy(name1,10,0);
    cout<<name1<<endl;

    return 0;
}