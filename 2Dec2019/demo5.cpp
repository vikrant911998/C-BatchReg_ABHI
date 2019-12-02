//Recursion -> when a function calls itself again and again.
#include<iostream>
using namespace std;

void print(int num){

    if(num == 0){
        return ;
    }
    cout<<"Hello "<<num<<endl;
    num--;
    print(num);
}

int main(){
    print(5);
    

    return 0;
}