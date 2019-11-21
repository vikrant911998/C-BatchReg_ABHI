#include<iostream>
using namespace std;

int main(){
    int a[5]={32,71,17,24,91};
    int j,i;

    cout<<"Enter the number to be searched"<<endl;
    cin>>j;

    for(i=0;i<5;i++){
        if(a[i] == j){
            cout<<"Element Found"<<endl;
            break;
        }
            
    }
    
    if(i == 5){
        cout<<"Element Not Found"<<endl;
    }

    


    return 0;
}