#include<iostream>
using namespace std;
//function declaration.
void sum();


int main(){
    //function calling.
    sum();

    return 0;
}

// 2.No return type and no argument
//function definition
void sum(){
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;

    cout<<"Sum = "<<a+b<<endl;
}


