#include<iostream>
using namespace std;

int main(){
    int a[5] ={10,20,30,40,50};
    int *ptr = a; //we don't have to use '&' operator as array already holds the base address which is the address of the zero index value.

    // cout<<a[0]<<endl;
    // cout<<*ptr<<endl;
    // cout<<*(ptr+1)<<endl;
    cout<<"Array before"<<endl;
    for(int i=0;i<5;i++){
        cout<<*(ptr+i)<<endl;
    }

    cout<<"Enter the array Elements"<<endl;
    for(int i=0;i<5;i++){
        cin>>*(ptr+i);
    }

    cout<<"Array after"<<endl;
    for(int i=0;i<5;i++){
        cout<<*(ptr+i)<<endl;
    }


    return 0;
}