#include<iostream>
using namespace std;

int power(int base, int exponent, int result){//2,0,4
    
    if(exponent == 0){
        return result;//8
    }


    result = result*base; //1*2 = 2*2 = 4*2 = 8
    --exponent; //1

    return power(base,exponent,result);
}




int main(){
    int base,exponent;
    
    cout<<"Enter the base and exponent"<<endl;
    cin>>base>>exponent;    

    int result = power(base,exponent,1);

    cout<<"Result  = "<<result<<endl;


    return 0;
}
