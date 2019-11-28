#include<iostream>
using namespace std;

long factorial(int);

int main(){
        int a;
        cout<<"Enter a number to determine its factorial"<<endl;
        cin>>a;
        cout<<endl;
        cout<<"Factorial of input number is:"<<endl;
        cout<<factorial(a);
        cout<<endl;

        return 0;
    }

    long factorial (int m){
        long product=1;

        for(int n=m; n>0; n=n-1){
            product=product*n;

        }


        return product;
    }