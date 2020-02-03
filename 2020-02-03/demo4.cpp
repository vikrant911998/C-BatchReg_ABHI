#include<iostream>
using namespace std;

typedef struct Student{
    int rollNo;
    string name;
}Student;

int main(){
    // Student s1;
    // s1.id = 102;
    // s1.name = "Ram";

    Student *ptr = new Student;
    ptr->rollNo = 101;
    ptr->name = "Rahul";

    cout<<"Roll No = "<<ptr->rollNo<<endl;
    cout<<"Name = "<<ptr->name<<endl;

    return 0;
}