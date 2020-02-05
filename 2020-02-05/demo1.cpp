#include<iostream>
using namespace std;

class Demo{
    int id;
    string name;
    public:
        Demo(){

        }
        Demo(int id,string name){
            this->id = id;
            this->name = name;
        }
        void show(){
            cout<<"Id = "<<id<<endl;
            cout<<"Name = "<<name<<endl;
        }
};

Demo * growing(Demo arr[],int size){
    Demo *duplicate = new Demo[size*2];

    for(int i=0;i<size;i++){
        duplicate[i] = arr[i];
    }
    
    return duplicate;
}

int main(){
    int size = 2;
    Demo *arr = new Demo[size];

    Demo obj(102,"Vikrant");
    Demo obj1(101,"Vikas");

    arr[0] = obj1;
    arr[1] = obj;

    arr = growing(arr,size);

    size = size*2;

    for(int i=0;i<size;i++){
        arr[i].show();
    }

    return 0;
}
