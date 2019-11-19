#include<iostream>
using namespace std;

int main(){
    int number = 0;//3452
    int reverse = 0;//2543

    cout<<"Enter the number "<<endl;
    cin>>number;

    while(number !=0){
        int temp  = number %10;

        reverse = reverse*10 + temp;
        number = number/10;
    }

    cout<<"Reversed Number is "<<reverse<<endl;


    return 0;
}