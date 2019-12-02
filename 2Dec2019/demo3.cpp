#include<iostream>
using namespace std;

typedef struct Student{
    int id;
    string name;

}Student;

Student input(){
    Student temp;
    cout<<"Enter the id"<<endl;
    cin>>temp.id;
    cout<<"Enter the Name"<<endl;
    cin>>temp.name;

    return temp;
}

void show(Student s){

    cout<<s.id<<endl;
    cout<<s.name<<endl;

}

int in(){
    int number;
    cout<<"Enter a number"<<endl;
    cin>>number;

    return number;
}



int main(){
    int result = in();
    Student s = input();
    show(s);

    return 0;
}