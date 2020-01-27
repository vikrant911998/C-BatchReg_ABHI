#include<iostream>
using namespace std;

class Student{
    int id;
    string name;

    public:
        void input(){
            cout<<"Enter the id"<<endl;
            cin>>id;
            cout<<"Enter the Name"<<endl;
            cin>>name;
        }

        void output(){
            cout<<"Id = "<<id<<endl;
            cout<<"Name = "<<name<<endl;
        }
};


int main(){
    Student arr[2];
    Student obj;

    for(int i=0;i<2;i++){
        obj.input();

        arr[i] = obj;
    }
   
    for(int i=0;i<2;i++){
        arr[i].output();
    }

    return 0;
}