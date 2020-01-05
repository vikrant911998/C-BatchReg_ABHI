//Jump Statements

#include<iostream>
using namespace std;

void print(){
    cout<<"Print Function Called"<<endl;
}


//GOTO Statement
int main(){
    int i = 0;

    

    for(i=1;i<=5;i++){
        if(i == 4){
            goto pr;
        }
        cout<<i<<endl;
        
    }
    pr:print();
    cout<<"Value Outside Loop "<<i<<endl;

    return 0;
}