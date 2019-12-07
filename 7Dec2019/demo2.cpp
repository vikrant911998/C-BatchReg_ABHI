#include<iostream>
using namespace std;

class Employee{
    private:
        int id;
        string name;
    public:
        void setId(int id){
           this->id = id;
        }
        int getId(){
            return this->id;
        }
        void setName(string name){
            this->name = name;
        }
        string getName(){
            return this->name;
        }
};


int main(){
    Employee emp2;
    emp2.setId(101);
    emp2.setName("Vikrant");

    cout<<"Id = "<<emp2.getId()<<endl;
    cout<<"Name  = "<<emp2.getName()<<endl;

    return 0;
}