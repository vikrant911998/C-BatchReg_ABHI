//Dynamic Memory Allocation.
#include<iostream>
using namespace std;

int main(){
    string *ptr = new string;
    *ptr = "vikrant";

    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    return 0;
}