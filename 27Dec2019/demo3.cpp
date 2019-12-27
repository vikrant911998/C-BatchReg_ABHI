//Object and Pointers

#include<iostream>
using namespace std;

class A{
    public:

        // pure virtual function
        // virtual void print() = 0;

        //Virtual Function.
        virtual void show(){
            cout<<"Show of Class A"<<endl;
        }
};


class B : public A{
    public:
        void show(){
            cout<<"Show of Class B"<<endl;
        }
};


int main(){

    B obj;
    // obj.show();

    B *ptr = &obj;

    A *p = &obj;
    p->show();

    return 0;
}