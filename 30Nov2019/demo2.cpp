#include<iostream>
using namespace std;

struct Student{
    int roll_no;
    string name;
}s1,s2;

int main(){
    
    s1={101,"vikrant"}; //Error expression.
    s2={102,"vikas"};

    cout<<s1.roll_no<<endl;
    cout<<s1.name<<endl;


    return 0;
}