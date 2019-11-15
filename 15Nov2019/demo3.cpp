#include<iostream>
using namespace std;

//Loops
//while,do-while,for.

int main(){
    int i = 1;

    while(i<=10){
        

        cout<<i<<endl;

        if(i==7)
            break;
        // i = i+1;
        // i++; //increment operator.
        ++i;
    }

    return 0;
}