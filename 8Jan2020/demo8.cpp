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
    Student obj1,obj2;

    obj1.input();
    obj2.input();

    arr[0] = obj1;
    arr[1]=  obj2;


    for(int i=0;i<2;i++){
        arr[i].output();
    }

    return 0;
}