//Static Function and Variables.

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
        }

        
        static void show(){
            cout<<"Static ID = "<<id<<endl; 
        }
};

int Employee::id = 101;


int main(){
    
    //syntax for calling static function.
    Employee::show();

    return 0;
}