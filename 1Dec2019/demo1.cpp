#include<iostream>
using namespace std;

int main(){
    int sizze=0;
    

    cout<<"Enter the size of the array:"<<endl;
    cin>>sizze;
    cout<<endl;

    int arr[sizze];
    
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0; i<sizze; i++){
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"The input array is displayed below:"<<endl;
    for(int j=0; j<sizze; j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;

    for(int k=1; k<sizze; k++){
        if(arr[0]<arr[k]){
            arr[0]=arr[k];
        }

    }

    cout<<"The largest element of the above array is: "<<arr[0]<<endl;


    return 0;
}