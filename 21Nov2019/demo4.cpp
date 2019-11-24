#include<iostream>
using namespace std;

int main(){
    int a[6] = {1,2,3,4,5};
    int number,index;

    cout<<"Enter the number to be inserted"<<endl;
    cin>>number;

    cout<<"Enter the index"<<endl;
    cin>>index;

    for(int i=5;i>index;i--){
        a[i] = a[i-1];
    }
    a[index] = number;

    cout<<"Array ELements"<<endl;
    for(int j=0;j<6;j++){
        cout<<a[j]<<endl;
    }


    return 0;
}