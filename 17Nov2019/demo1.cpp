#include<iostream>
using namespace std;

int main(){ 
    int count=0;
    int number = 0;

    // cout<<number/10<<endl;
    cout<<"Enter a number "<<endl;
    cin>>number;

    while(number != 0){
        // if(number > 0){
        //     count++;    
        // }
        if(number%10 == 0)
            count++;
            
        number = number/10;
    }

    cout<<"Number of Digits "<<count<<endl;

    return 0;   
}