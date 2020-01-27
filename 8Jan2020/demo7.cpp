//Taking input in static variables from User.

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


        //Need to create static function to take input in  static variable (cmpcode).
        static void takeCmpCode(){
            cout<<"Enter the Company Code"<<endl;
            cin>>cmpcode;
        }

};


//Must initialize static variables before hand, it can be over written.
int User::id = 124531;
string User::cmpcode = "";


int main(){
    User::takeCmpCode();

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