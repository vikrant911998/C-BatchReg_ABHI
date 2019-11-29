//Structures.
#include<iostream>
using namespace std;

struct Student{ //customised data type or user defined datatype.
    int roll_no;
    string name;
}s2,s3;   //Global variables.

struct Student s1;   //Global Structure variable.

int main(){
    int a;
    struct Student s; // local Main variable.
    s1.roll_no = 101;
    s1.name ="Vikrant";

    cout<<s1.roll_no<<endl;
    cout<<s1.name<<endl;
    

    return 0;
}
