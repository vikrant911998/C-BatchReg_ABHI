#include<iostream>
using namespace std;

class A{
    public:
        void show(int a){
            cout<<"Show of Class A"<<endl;
        }
};


class B : public A{
    public:
        int show(int a,string s){
            cout<<"Show of Class B"<<endl;
            return 0;
        }
};

int main(){
    B obj;
    obj.show(23,"Vikrant");

    return 0;
}