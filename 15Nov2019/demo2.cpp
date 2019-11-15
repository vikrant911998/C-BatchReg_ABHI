#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;

    switch(a){
        default: cout<<"Number is not in Case"<<endl;
            // break;
        case 1: cout<<"Number is One"<<endl;
            // break;
        case 2: cout<<"Number is Two"<<endl;
            break;
        case 3: cout<<"Number is Three"<<endl;
            // break;
        case 4: cout<<"Number is Four"<<endl;
            // break;
        case 5: cout<<"Number is Five"<<endl;
            // break;    
    };

    return 0;
}