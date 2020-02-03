//DMA -> arrays

#include<iostream>
using namespace std;

int main(){
    int *ptr = new int[5];

    for(int i=0;i<5;i++){
        *(ptr+i) = i+100;
    }

    *(ptr+3) = 309;

    for(int i=0;i<5;i++){
        cout<<*(ptr+i)<<" ";
    }
    int *temp = ptr;

    // delete[] ptr;
    
    // for(int i=0;i<5;i++){
    //     cout<<*(temp+i)<<" ";
    // }

    cout<<endl;

    return 0;
}