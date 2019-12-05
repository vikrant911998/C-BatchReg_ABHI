#include<iostream>
using namespace std;

class Student{
    private:
        //Member Variable,Instance Variable,Data members.
        int id;
        string name;
        string address;
        
    public:
        
        //Member functions or methods.
        void input(int i,string n,string a){
           id = i;
           name = n;
           address = a; 
        }

        void output(){
            cout<<"Id "<<id<<endl;
            cout<<"Name "<<name<<endl;
        }
        

};



int main(){
    Student s;  //s is an object of Student class.
    s.input(101,"vikrant","rohini");
    s.output();

    return 0;
}