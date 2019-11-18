#include<iostream>
using namespace std;
//function declaration.
int sum(int,int);

// function_return_type function_name(// arguments){

//     return
// }



int main(){
    int a=2,b=4;//local variables of main function.

    int result = sum(a,b);//function calling.

    cout<<"Result "<<result<<endl;

    return 1;
}

// 1.with return type and with argument
//function definition.
int sum(int p,int q){//local variables of sum function.
    // int c = p+q;
    
    return (p+q);
    
}




