#include<iostream>
using namespace std;

class Student{
    private:
        int sid;
        string name;
        string address;

    public:
        //Default Constructor only used to initialise instance variables.
        Student(){
            this->sid = 0;
            this->name = ' ';
            this->address = ' ';
        }

        //Parameterised Constructor used to initialize instance variables with argument's values.
        Student(int sid,string name,string address){
            this->sid = sid;
            this->name = name;
            this->address = address;
        }

        //To take input in instance variables from user.
        void input(){
            cout<<"Enter the Student Id"<<endl;
            cin>>sid;
            cout<<"Enter the Student Name"<<endl;
            cin>>name;
            cout<<"Enter the Student Address"<<endl;
            cin>>address;
        }
        
        //Setters for instance variables.
        void setSid(int sid){
            this->sid = sid;
        }

        void setName(string name){
            this->name = name;
        }

        void setAddress(string address){
            this->address = address;
        }


        //Getters to take out values of instance variables.
        int getSid(){
            return this->sid;
        }

        string getName(){
            return this->name;
        }

        string getAddress(){
            return this->address;
        }


        //Function to print values of instance variables.
        void show(){
            cout<<"Student Id = "<<sid<<endl;
            cout<<"Student Name = "<<name<<endl;
            cout<<"Student Address = "<<address<<endl;
        }

};




int main(){
    Student obj;
    obj.input();
    

    Student obj1(101,"Vikrant","Rohini");
    

    Student obj2;
    obj2.setSid(102);
    obj2.setName("Ram");
    obj2.setAddress("Ayodhya");

    cout<<"Student ID = "<<obj2.getSid()<<endl;
    obj.show();

    return 0;
}