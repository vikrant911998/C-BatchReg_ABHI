#include<iostream>
using namespace std;

void add(){
    int a,b;
    cout<<"Enter Two Numbers"<<endl;
    cin>>a>>b;
    cout<<a+b<<endl;
}

void sub(){
    int a,b;
    cout<<"Enter Two Numbers"<<endl;
    cin>>a>>b;
    cout<<a-b<<endl;
}

void mul(){
    int a,b;
    cout<<"Enter Two Numbers"<<endl;
    cin>>a>>b;
    cout<<a*b<<endl;
}

void div(){
    int a,b;
    cout<<"Enter Two Numbers"<<endl;
    cin>>a>>b;
    cout<<a/b<<endl;
}



int main(){
    int choice=0;
    bool b = true; //false;

    while( true ){
        cout<<"1.ADD"<<endl;
        cout<<"2.SUB"<<endl;
        cout<<"3.MUL"<<endl;
        cout<<"4.DIV"<<endl;
        cout<<"5.EXIT"<<endl;

        cin>>choice;

        switch(choice){
            case 1:add();
                break;
            case 2:sub();
                break;
            case 3:mul();
                break;
            case 4:div();
                break;
            default:exit(0);
        }

    }


    return 0;
}