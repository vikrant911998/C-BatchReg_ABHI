#include<iostream>
using namespace std;
//function declaration
int sum();


int main(){
    int result = sum();

    cout<<"Result = "<<result<<endl;

    return 0;
}


// 4.with return type and no argument
//function definition
int sum(){
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;

    return (a+b);
}