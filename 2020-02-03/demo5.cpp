#include<iostream>
using namespace std;

class Demo{
    public:
        int data;
        
        Demo(int data){
            this->data = data;
        } 
};

int main(){
    Demo *obj = new Demo(100);

    // obj->data = 100;

    cout<<obj->data<<endl;

    return 0;
}