#include<iostream>
using namespace std;

class A{

    public:
        A(){
            cout<<"A class Constructor "<<endl;
        }

        ~A(){
            cout<<"A class Destructor "<<endl;
        }
        void show(){
            cout<<"Show Function Called"<<endl;
        }

};


int main(){
    A obj;
    obj.show();
    

    return 0;
}