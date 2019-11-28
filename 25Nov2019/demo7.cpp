//Square Root
#include<iostream>
using namespace std;

int main(){
    int factors[10];
    int number;
    int temp,quotient,k=0;
    cout<<"Enter the number"<<endl;
    cin>>number;

    temp = number;

    for(int j=0;j<10;j++){
        factors[j]=0;   
    }

    for(int i=2; number != 1;i++){
        if(number%i == 0){
            // for( ; number%i == 0 ; ){
            while(number%i == 0){
            
                quotient = number/i;//15
                cout<<quotient<<endl;
                factors[k] = i;//2,2
                k++;
                number  = quotient; //15
            }
        }
    }

    for(int j=0;j<10;j++){
        cout<<factors[j]<<" ";
    }
    cout<<endl;


    return 0;
}