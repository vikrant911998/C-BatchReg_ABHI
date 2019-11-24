#include<iostream>
using namespace std;

int main(){
    int i;
    cout<<"Enter a number"<<endl;
    cin>>i;
    int m = i;
    while(m>0){
        cout<<m<<endl;
        m--;
    }

    int sum =0;
    m = i;
    while(m>0){
        sum = sum+m;
        m--;
    }
    cout<<"SUM = "<<sum<<endl;

    return 0;
}