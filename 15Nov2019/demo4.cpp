#include<iostream>
using namespace std;

int main(){
    int a=12;
    // int b = a++; //post increment
    // int b = ++a;// pre increment

    // int b = a--; //post decrement
    int b = --a; //pre decrement

    cout<<"A = "<<a<<" and B = "<<b<<endl;

    return 0;
}