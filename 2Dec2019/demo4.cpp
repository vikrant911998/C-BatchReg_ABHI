//use structures  in function through pointers.
#include<iostream>
using namespace std;

typedef struct Student{
    int id;
    string name;

}Student;


Student * input(){
    Student *temp = new Student;
    
    cout<<"Enter the id"<<endl;
    cin>>temp->id;
    cout<<"Enter the Name"<<endl;
    cin>>temp->name;

    return temp;

}

void show(Student *s){

    cout<<"Id -> "<<s->id<<endl;
    cout<<"Name -> "<<s->name<<endl;

}

int main(){
    Student *s = input();
    show(s);


    return 0;
}