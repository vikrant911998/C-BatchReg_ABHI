#include<iostream>
using namespace std;

class Demo{
    private:
        int a;
    
    public:
        //Default Constructor only declaration.
        Demo();

};


//Definition of Default Constructor OUtside the Class using scope resolution.
Demo::Demo(){
    cout<<"Default Constructor of Class Demo"<<endl;
}


int main(){
    Demo obj;

    return 0;
}