//Call by Reference

#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

int main(){

    int a = 10,b = 20;
    // int *temp = &a;

    cout<<"A = "<<a<<" and B = "<<b<<endl;
    swap(&a,&b);

    cout<<"A = "<<a<<" and B = "<<b<<endl;
    
    return 0 ;
}