//Jump Statements

#include<iostream>
using namespace std;

//Break Statement
int main(){
    int i = 0;
    for(i=1;i<=5;i++){
        if(i == 4){
            break;
        }
        cout<<i<<endl;
    }
    cout<<"Value Outside Loop "<<i<<endl;

    return 0;
}