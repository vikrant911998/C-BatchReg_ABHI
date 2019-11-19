#include<iostream>
using namespace std;
void add(int,int);
void sub(int,int);
void mul(int,int);
void division(int,int);


int main(){
    int choice = 0;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;

    cout<<"Enter your choice"<<endl;
    cin>>choice;
    
    int first=0,second=0;

    cout<<"Enter first Number"<<endl;
    cin>>first;
    cout<<"Enter second Number"<<endl;
    cin>>second;

    switch(choice){
        case 1:add(first,second);
            break;
        case 2:sub(first,second);
            break;
        case 3:mul(first,second);
            break;
        case 4:division(first,second);
            break;
        default:cout<<"Invalid Choice"<<endl;
        
    };

    return 0;
}

void add(int a,int b){
    cout<<a+b<<endl;
}

void sub(int a,int b){
    cout<<a-b<<endl;
}
void mul(int a,int b){
    cout<<a*b<<endl;
}
void division(int a,int b){
    cout<<a/b<<endl;
}