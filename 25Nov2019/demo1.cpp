#include<iostream>
using namespace std;

int main(){
    int divisors[20];
    int factors[50];
    int i, j, k;
    cout<<"Enter a number to determine its square root:"<<endl;
    cin>>i;

        for(int m=0;m<20;m++){
            divisors[m] = 0;
        }

        for(j=2, k=0; k<20 && j<i ; j=j+1){
            if(i%j==0){
                divisors[k]=j;
                k++;
            }
        }

        for(int n=0; n<20; n++){

            cout<<divisors[n]<<" ";
        }

    return 0;
}