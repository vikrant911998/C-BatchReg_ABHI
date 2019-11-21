#include<iostream>
using namespace std;

int main(){
    int a[5]={32,71,17,24,91};
    int j;
    bool isFound = false;

    cout<<"Enter the number to be searched"<<endl;
    cin>>j;

    for(int i=0;i<5;i++){
        if(a[i] == j){
            isFound = true;
            cout<<"Element Found"<<endl;
        }
            
    }
    if(!isFound){
        cout<<"Element Not Found"<<endl;
    }

    


    return 0;
}