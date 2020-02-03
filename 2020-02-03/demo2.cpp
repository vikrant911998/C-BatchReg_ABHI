//DMA -> variables.

#include<iostream>
using namespace std;

int main(){
    int a = 3;
    int *ptr = new int;
    *ptr = 100;

    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    string *p = new string;
    *p = "Hello";

    cout<<p<<endl;
    cout<<*p<<endl;

    return 0;
}