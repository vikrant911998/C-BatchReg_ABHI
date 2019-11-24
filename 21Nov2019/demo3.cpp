#include<iostream>
using namespace std;

int main(){
    int size = 3;
    int a[size];
    cout<<"Enter the size"<<endl;
    cin>>size;

    
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }

    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }

    return 0;
}