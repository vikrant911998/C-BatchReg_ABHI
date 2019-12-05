#include<iostream>
using namespace std;

class Student{
    public:
        //Member Variable,Instance Variable,Data members.
        int id;
        string name;
        string address;
        

};



int main(){
    Student s;  //s is an object of Student class.
    s.id = 101;
    s.name = "-12";
    s.address = "#";

    cout<<"Id "<<s.id<<endl;  //<< -> Insertion operator. , >> ->extraction operator.
    cout<<"Name "<<s.name<<endl;
    cout<<"Address "<<s.address<<endl;

    return 0;
}