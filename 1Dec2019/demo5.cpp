#include<iostream>
using namespace std;

typedef struct Student{
    int rollno;
    string name;
}Student;


int main(){
    int a = 12;
    int *ptr = &a;

    Student s1 = {101,"Vikrant"};
    Student *ptr1 = &s1;

    // cout<<&s1<<endl;
    // cout<<ptr1<<endl;

    cout<< ptr1->rollno <<endl;
    cout<< ptr1->name <<endl;


    return 0;
}
