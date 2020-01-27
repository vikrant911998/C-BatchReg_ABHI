//Static Variable initialized inside the class Gives Error.

#include<iostream>
using namespace std;

class Employee{
    int empid;
    string name;
    static int id = 101; //Error -> static variables cannot be initialized inside the class but can be declared. 

    public:
        void input(){
            cout<<"Enter the Employee id"<<endl;
            cin>>empid;
        }

        void output(){
            cout<<"Employee ID = "<<empid<<endl;
        }

        //Static function can also be initialized outside the class.
        static void show(){
            cout<<"Static ID = "<<id<<endl;  //Error
        }
};


int main(){
    
    //syntax for calling static function.
    Employee::show();

    return 0;
}