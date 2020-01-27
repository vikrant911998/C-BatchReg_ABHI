#include<iostream>
using namespace std;

class User{
    static int id;
    static string cmpcode;
    string userid;
    string name;
    
    public:

        void input(){
            string str = to_string(id); //to_string method to convert int into string.
            userid = cmpcode + str;
            cout<<"Enter the Name"<<endl;
            cin>>name;
            id++;

        }

        void output(){

            cout<<"Userid = "<<userid<<endl;
            cout<<"Name = "<<name<<endl;

        }

};

int User::id = 124531;
string User::cmpcode = "TCS";


int main(){
    User obj,obj1,obj2,obj3;

    obj.input();
    obj1.input();
    obj2.input();
    obj3.input();

    obj.output();
    obj1.output();
    obj2.output();
    obj3.output();


    return 0;
}