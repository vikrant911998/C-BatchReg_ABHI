//Call BY Value 

#include<iostream>
using namespace std;



void swap(int a,int b){ 
    int c = a;
    a = b;
    b = c;
}



int main(){
    int a = 10,b = 20; // -> Address of these variables will be different from the address of the variables of the swap function.
    
    cout<<"A = "<<a<<" and B = "<<b<<endl;


    swap(a,b); // ->It only changes the value of the variables inside the swap function not inside the main function.

    cout<<"A = "<<a<<" and B = "<<b<<endl;

    return 0;
}