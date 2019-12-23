//Multiple Inheritance

#include<iostream>
using namespace std;

class A{
    public:
        void common1(){
            cout<<"Common Method of Class A"<<endl;
        }
};

class B{
    public:
        void common2(){
            cout<<"Common Method of Class B"<<endl;
        }
};

class C : public A,public B{
    public:
        void m(){
            cout<<"Method of Class C"<<endl;
        }
};

int main(){
    C obj;
    obj.common1();
    obj.common2();
    obj.m();

    return 0;
}