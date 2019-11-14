#include<iostream>
using namespace std;

int main(){
    //variable declaration
    int length=0,breadth=0;
    int area=0;

    cout<<"Enter two numbers"<<endl;
    // cin>>length;
    // cin>>breadth;
    cin>>length>>breadth;
    // length = 10;
    area = (length*breadth);
    cout<<"Area ="<<area<<endl;

    return 0;
}