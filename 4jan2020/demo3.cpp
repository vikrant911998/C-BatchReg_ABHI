#include<iostream>
using namespace std;

template <class Temp,class Temp1,class Temp2>

class Calc{
    Temp data1;
    int data2;
    int arr[];

    public:
        Calc(Temp data1,int data2){
            this->data1 = data1;
            this->data2 = data2;
        }

        void sum(){
            cout<<data1+data2<<endl;
        }
};

int main(){
    Calc<double,string,int> obj(23.45,45);
    obj.sum();

    

    return 0;
}

