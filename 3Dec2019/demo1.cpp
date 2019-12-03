#include<iostream>
using namespace std;

int main(){
    int sizze;
    cout<<"Enter the size of the array"<<endl;
    cin>>sizze;
    cout<<endl;

    float arr[sizze];
    for(int i=0; i<sizze; i++){
        if(i%2==0){
            arr[i]=(float)(i+1)*(i+1) - 1;
            cout<<arr[i]<<endl;
        }
        else{
            arr[i]=(float)(i+1)*(i+1)/(i);
            cout<<"inside else "<<arr[i]<<endl;
        }
    }

    cout<<"The array before sorting is displayed below:"<<endl;
    for(int i=0; i<sizze; i++){
        cout<<arr[i]<<" "<<endl;
    }
    cout<<endl;

    int temp;
    for(int i=0; i<sizze-1; i++){
        for(int j=i+1; j<sizze; j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    cout<<"The array after sorting in an increasing order is displayed below:"<<endl;
    for(int i=0; i<sizze; i++){
        cout<<arr[i]<<" "<<endl;
    }
    cout<<endl;

return 0;
}