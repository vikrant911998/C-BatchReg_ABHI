#include<iostream>
using namespace std;

int main(){
    int a[5]={21,3,15,10,9};
    int n = 5;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
               int temp = a[i];
               a[i] = a[j];
               a[j] = temp; 
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }

    return 0;
}