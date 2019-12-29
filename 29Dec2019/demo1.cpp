// Pure Virtual Function with SIngle Inheritance

#include<iostream>
using namespace std;


//Abstract Class because it has pure virtual function named show.
class A{
    public:
        virtual void show() = 0;

};



class B : public A{
    public:
        void show(){
            cout<<"Overriden Show"<<endl;
        }

};



int main(){
    // A obj;  -> As A is an abstract Class.
    B obj;
    obj.show();


    return 0;
}