#include<iostream>
using namespace std;

//Ternary Operator
// condition ? true :false;

int main(){ 
    int a = 10;

    int b = a%2!=0 ? 100 : 99;
    //int b = 99;
    //int b = 100;
    cout<<b<<endl;

    return 0;
}