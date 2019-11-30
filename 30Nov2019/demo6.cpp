//Fibonacci Series.
#include<iostream>
using namespace std;

int main(){
    int a[1000]={0};
    a[0] = 1;
    a[1] = 1;

    for(int i=2;i<1000;i++){
        a[i] = a[i-1] +a[i-2];
    }

    for(int i=0;i<1000;i++){
        cout<<a[i]<<endl;
    }

    

    return 0;
}