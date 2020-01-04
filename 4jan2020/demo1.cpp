#include<iostream>
using namespace std;

double checkdecimal(float a){
    int b= a*10;
    int c= b%10;

    return c;
}

int main(){
    double num;
    cout<<"Enter a decimal number to show its decimal representation:"<<endl;
    cin>>num;
    cout<<endl;

    double num1=num;

    while(checkdecimal(num)!= 0){
        num=num*10;
    }

    long int denominator= num/num1;

    long int numerator= num;

//    cout<<num<<" "<<num1<<endl;
//    cout<<234567/23.4567<<endl;
//    cout<<numerator<<" "<<denominator<<endl;


    for(int i=2; i<denominator; i++){
        while(numerator%i==0 && denominator%i==0){
            numerator=numerator/i;
            denominator=denominator/i;
        }

    }

    cout<<"Fractional representation of the input decimal is: "<<endl;
    cout<<numerator<<"/"<<denominator;
    cout<<endl;

    return 0;
}
