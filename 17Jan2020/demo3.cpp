#include<iostream>
using namespace std;

class Demo{
    private:
        int a;
    
    public:
        void show();

};

void Demo::show(){
    cout<<"Default Constructor of Class Demo"<<endl;
}

void show(){
    cout<<"Global Show Function"<<endl;
}


int main(){
    Demo obj;
    obj.show(); //calls show function of Class Demo.
    show(); //calls the global show function.

    return 0;
}