#include<iostream>
using namespace std;

void display(int *p){
    *(p+2) = 999;
    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }
}

int main(){
    int a[5] = {10,20,30,40,50};
    display(a);

    return 0;
}