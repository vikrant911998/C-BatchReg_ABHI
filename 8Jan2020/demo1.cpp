//Static Function and Variables.

#include<iostream>
using namespace std;

class Employee{
    int empid;
    string name;
    static int id; //You can create static variable inside the class and cannot initialize inside it.

    public:
        void input(){
            cout<<"Enter the Employee id"<<endl;
            cin>>empid;
        }

        void output(){
            cout<<"Employee ID = "<<empid<<endl;
        }

        //Static function can also be initialized inside the class.
        static void show(){
            cout<<"Static ID = "<<endl; 
        }
};


int main(){
    Employee obj;
    obj.input();
    obj.output();

    //syntax for calling static function.
    Employee::show();

    return 0;
}