#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Value of a is "<<a<<endl;
    cout<<"Enter a number"<<endl;
    cin>>a;

    if(a == 0){
        cout<<"Number is Zero"<<endl;
    }
    else if(a>0){
        cout<<"Number is positive"<<endl;
    }
    else if(a<0){
        cout<<"Number is Negative"<<endl;
    }
    else{
        cout<<"Invalid input"<<endl;
    }


    return 0;
}