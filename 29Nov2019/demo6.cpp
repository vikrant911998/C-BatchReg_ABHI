//Structures.
#include<iostream>
using namespace std;

struct Student{ //customised data type or user defined datatype.
    int roll_no;
    string name;
}s2;   

 

int main(){
    
    s2.roll_no = 101;
    s2.name ="Vikrant";

    cout<<s2.roll_no<<endl;
    cout<<s2.name<<endl;
    

    return 0;
}
