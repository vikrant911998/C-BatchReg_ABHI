#include<iostream>
using namespace std;

class Demo{
    private:
        int a;
    
    public:
        Demo();

        Demo(int); // ->Declaration of Parameter Constructor same as argumented function.

};

Demo::Demo(){
    cout<<"Default Constructor of Class Demo"<<endl;
}

Demo::Demo(int a){
    this->a = a;
    cout<<"Parameter Constructor outside the class Demo"<<endl;
}


int main(){
    Demo obj;

    return 0;
}