#include<iostream>
using namespace std;

int * format(int arr[]){

    for(int i=0;i<10;i++){
        arr[i] = i+10;
    }

    return arr;
}


int main(){
    int a[10] = {11,23,41,56,78,822,90,89,32,51};
    
    
    int *ptr = format(a);

    for(int i=0;i<10;i++){
        a[i] = ptr[i];
    }

    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }


    return 0;
}