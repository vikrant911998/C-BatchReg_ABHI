//Call by Reference
#include<iostream>
using namespace std;

void sum(int *a,int *b){
    *a = 5;
    *b= 10;
    cout<<(*a+*b)<<endl;
}

int main(){
    int a=10,b=20;
    sum(&a,&b);
    cout<<"Sum in Main Function "<<a+b<<endl;
    return 0;
}