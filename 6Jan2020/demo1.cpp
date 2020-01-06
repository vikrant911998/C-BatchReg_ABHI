#include<iostream>
using namespace std;

int main(){
    float number,number2;

    cout<<"Enter the Number"<<endl;
    cin>>number;

    

   try{
        
        if(number < 0){
            throw number;
        }

   }
   catch(float number){
       cout<<" Exception Caught "<<endl;
   }


    return 0;
}