#include<iostream>
using namespace std;

typedef struct Student{
    int roll_no;
    string name;
}Student;

int main(){
    Student s;
    s.roll_no = 101;
    s.name = "Vikrant";

    cout<<s.roll_no<<endl;
    cout<<s.name<<endl;




    return 0;
}