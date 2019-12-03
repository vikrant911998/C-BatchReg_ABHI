#include<iostream>
using namespace std;

int countZero(int number,int count){

    if(number == 0){
        return count;
    }

    if(number%10 == 0)
        count++;

    return countZero(number/10,count);
}

int main(){
    int number;

    cout<<"Enter a number"<<endl;
    cin>>number;

    int count = countZero(number,0);

    cout<<"Count  = "<<count<<endl;


    return 0;
}