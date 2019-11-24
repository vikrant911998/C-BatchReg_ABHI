#include<iostream>
using namespace std;

int main(){
    int a[3][3];

    cout<<"Enter the array Elements"<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i+j == 2)
                cout<<a[i][j]<<" ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }





    return 0;
}