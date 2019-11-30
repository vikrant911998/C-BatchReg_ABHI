#include<iostream>
using namespace std;

typedef struct Student{
    int roll_no;
    string name;
}Student;


int main(){
    Student s[2]; //Structure Array.

    Student s1,s2;

    s1.roll_no = 101;
    s1.name = "vikrant";

    s2.roll_no = 102;
    s2.name = "vikas";

    s[0] = s1;
    s[1] = s2;

    for(int i=0;i<2;i++){
        cout<<s[i].roll_no<<endl;
        cout<<s[i].name<<endl;
        cout<<endl;
    }


    return 0;
}