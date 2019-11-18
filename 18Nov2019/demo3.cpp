#include<iostream>
using namespace std;
//function declaration.
void sum(int ,int);

int main(){
    int a = 10,b=20;
    //function calling
    sum(a,b);

    return 0;
}

// 3.No return type and with argument.
//function definition

void sum(int a, int b){
    cout<<"Sum = "<<a+b<<endl;
}