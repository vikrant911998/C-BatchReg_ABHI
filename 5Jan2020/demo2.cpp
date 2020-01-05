//Jump Statements

#include<iostream>
using namespace std;

//Continue Statement
int main(){
    int i = 0;

    for(i=1;i<=5;i++){
        if(i == 4){
            continue;
        }
        cout<<i<<endl;
    }
    cout<<"Value Outside Loop "<<i<<endl;

    return 0;
}