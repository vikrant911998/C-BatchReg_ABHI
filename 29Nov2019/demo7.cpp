//Structures.
#include<iostream>
using namespace std;

struct Student{ //customised data type or user defined datatype.
    int roll_no;
    string name;
}s2={101,"vikrant"};   

 

int main(){
    struct Student s = {102,"vicky"};
    

    cout<<s2.roll_no<<endl;
    cout<<s2.name<<endl;

    cout<<s.roll_no<<endl;
    cout<<s.name<<endl;
    

    return 0;
}
