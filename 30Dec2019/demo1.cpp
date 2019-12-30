//Interface

#include<iostream>
using namespace std;

//Interface only contains constants and pure virtual functions.

class Math{
    const int PI=3.14;
    
    public:
        
        virtual void add()=0;
        virtual void sub()=0;
};


class PrimitiveNumber : public Math{
        int a,b;
    public:
        void add(){
            cout<<a+b<<endl;
        }

        void sub(){

        }
};

class ComplexNumber : public Math{
        int real;
        int imaginary;
    public:
        void add(){

        }

        void sub(){

        }
};




int main(){


    return 0;
}