//Accessing non-static variable in static function and vice-versa.

#include<iostream>
using namespace std;

class Employee{
    int empid;
    string name;
    static int id; 

    public:
        void input(){
            cout<<"Enter the Employee id"<<endl;
            cin>>empid;
        }

        void output(){
            cout<<"Employee ID = "<<empid<<endl;
            cout<<"Static ID = "<<id<<endl;
        }

        
        // static void show(){
        //     cout<<"Static ID = "<<id<<" and "<<name<<endl;  //Error due to accessing non-static variable(name) in static function.
        // }
};

int Employee::id = 101;



int main(){

    Employee obj;
    obj.input();
    obj.output();

    //syntax for calling static function.
    // Employee::show();

    return 0;
}