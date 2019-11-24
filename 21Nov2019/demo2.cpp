#include<iostream>
using namespace std;

int main(){
    int a[5]={1,2,3,4,5};
    int index;
    
    cout<<"Enter the index"<<endl;
    cin>>index;
    int i;
    
    for(i=index;i<4;i++){
        a[i] = a[i+1];
    }
    a[i] = 0;


    for(int j=0;j<5;j++){
        cout<<a[j]<<endl;
    }





    return 0;
}