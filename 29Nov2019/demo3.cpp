//Dynamic Memory Allocation.
#include<iostream>
using namespace std;

int main(){
    char *ptr = new char;
    *ptr = 'A';

    cout<<(new char)<<endl;
    cout<<*ptr<<endl;

    return 0;
}