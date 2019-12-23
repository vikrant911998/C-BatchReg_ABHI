//MultiLevel Inheritance.

#include<iostream>
using namespace std;

class A{
    public:
        void play1(){
            cout<<"Play one of Class A"<<endl;
        }
};

class B : public A{
    public:
        void play2(){
            cout<<"Play one of Class B"<<endl;
        }
};

class C : public B{
    public:
        void play3(){
            cout<<"Play one of Class C"<<endl;
        }
};


int main(){
    B obj;
    obj.play1();
    obj.play2();
    // obj.play3(); // Cannot call play3 method of child class C.


    C obj1;
    obj1.play1();
    obj1.play2();
    obj1.play3();
    //C's object can call methods of all parents and grandParents.
    return 0;
}