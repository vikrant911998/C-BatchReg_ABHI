// Hierarchical Inheritance

#include<iostream>
using namespace std;

//Single Parent 
class A{
    public:
        void common(){
            cout<<"Common Method of Class A"<<endl;
        }
};

//First Child
class B : public A{
    public:
        void m1(){
            cout<<"Method one of Class B"<<endl;
        }
};

//Second Child
class C : public A{
    public:
        void m2(){
            cout<<"Method two of Class C"<<endl;
        }
};

int main(){
    B obj1;
    obj1.common();
    obj1.m1();

    
    C obj2;
    obj2.common();
    obj2.m2();

    return 0;
}