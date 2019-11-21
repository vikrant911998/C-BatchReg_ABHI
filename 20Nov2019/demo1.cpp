#include<iostream>
using namespace std;

//One Dimensional Array.

int main(){
    //array declaration with size.
    int arr[5];

    //array declaration with intializing elements.
    int arr1[] = {10,20,30,40,55};

    //array declaration with initialization and array size.
    int arr2[5] = {23,41,51,56,91};
    
    // cout<<arr<<endl;
    cout<<"Enter 5 elements in the array"<<endl;
    for(int i=0;i<5;i++){
        // cout<<arr[i]<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        
        // cout<<arr[i]<<endl;
        // cin>>arr[i];
    }


    return 0;
}