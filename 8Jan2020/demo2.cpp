//Static Function and Variables.

#include<iostream>
using namespace std;

class Employee{
    int empid;
    string name;
    

    public:
        void input(){
            cout<<"Enter the Employee id"<<endl;
            cin>>empid;
        }

        void output(){
            cout<<"Employee ID = "<<empid<<endl;
        }

        //Static function declared inside the class but initialized outside the class.
        static void show();
};

//Definition of static function declared inside the class and must include the return type as defined inside the class.
void Employee::show(){
    cout<<"Static Function Defined outside"<<endl;
}


int main(){
    // Employee obj;
    // obj.input();
    // obj.output();

    //syntax for calling static function.
    Employee::show();

    return 0;
}