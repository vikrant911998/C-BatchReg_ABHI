//Jump Statements

#include<iostream>
using namespace std;

//EXIT Statement
int main(){
    int i = 0;

    for(i=1;i<=5;i++){
        if(i == 4){
            exit(0);
        }
        cout<<i<<endl;
    }
    cout<<"Value Outside Loop "<<i<<endl;

    return 0;
}