//Dynamic Memory Allocation.
#include<iostream>
using namespace std;

int main(){
    int *ptr = new int;
    *ptr = 999;

    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    return 0;
}