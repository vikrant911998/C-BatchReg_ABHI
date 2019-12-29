// Pure Virtual Function with Multi-Level Inheritance

#include<iostream>
using namespace std;


//Abstract Class because it has pure virtual function named show.
class A{
    public:
        virtual void play()=0;
        virtual void show() = 0;

};

//Abstract Class because it has pure virtual function named show1 and it doesn't override the pure virtual  function show of Class A.

class B : public A{ 
    public:
        virtual void show1() = 0;
};


//Class C has to override pure virtual functions of both classes A and B otherwise it will also become the abstract class.

class C : public B{
    public:
        void show(){

        }

        void show1(){

        }
        void play(){
            
        }
};



int main(){
    C obj;

    return 0;
}