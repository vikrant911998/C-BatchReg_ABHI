#include<iostream>
using namespace std;

typedef struct Student{
    int rollno;
    string name;
}Student;


int main(){
    Student s[2];
    Student s1 = {101,"Vikrant"};
    Student s2 = {102,"Vikas"};
    s[0] = s1;
    s[1] = s2;

    Student *ptr = s;

    cout<<s[1]<<endl;
    cout<<(ptr+1)->rollno<<endl;


    return 0;
}
