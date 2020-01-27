#include<iostream>
using namespace std;

class Student{
    // protected:
        int id;
        string name;
        string gender;

        public:
            int get_Id(){
                return this->id;
            }
};

class Address : public Student{
    string address;
    public:

        void show(){
            this->get_Id();
        }
};


int main(){
    Address obj;
    // obj.address;

    return 0;
}