//MultiLevel Inheritance -> Constructor Chaining.

#include<iostream>
using namespace std;

class A{
    public:
        A(){
            cout<<"Default Constructor of Class A"
            <<endl;        
            }
        void play1(){
            cout<<"Play one of Class A"<<endl;
        }
};

class B : public A{
    public:
        B(){
            cout<<"Default Constructor of Class B"
            <<endl;        
            }
        void play2(){
            cout<<"Play one of Class B"<<endl;
        }
};

class C : public B{
    public:
        C(){
            cout<<"Default Constructor of Class C"
            <<endl;        
            }
        void play3(){
            cout<<"Play one of Class C"<<endl;
        }
};


int main(){
    C obj;


    return 0;
}