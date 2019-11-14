#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;

    if(a>0){

        if(a%5 == 0){
            cout<<"Number is divisible by 5"<<endl;
        }
        else{
            cout<<"Number is not divisible by 5"<<endl;           
        }

    }
    else{
        cout<<"Number is negative"<<endl;
    }

    return 0;
}