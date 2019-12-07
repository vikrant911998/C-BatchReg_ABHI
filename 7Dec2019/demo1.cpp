#include<iostream>
using namespace std;

class Employee{
    private:
        int id;
        string name;
    public:
        //Setter for Id
        void setId(int i){
            id = i;
        }

        //Getter for Id
        int getId(){
            return id;
        }

        void setName(string n){
            name = n;
        }

        string getName(){
            return name;
        }

};


int main(){
    Employee emp1;
    emp1.setId(101);
    emp1.setName("Vikrant");

    cout<<"Id = "<<emp1.getId()<<endl;
    cout<<"Name  = "<<emp1.getName()<<endl;

    return 0;
}