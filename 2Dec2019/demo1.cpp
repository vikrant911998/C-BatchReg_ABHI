#include<iostream>
using namespace std;

int main(){
    int a[5]={11,22,33,44,5};

    int temp = a[1];
    a[1] = a[3];
    a[3] = temp;

    


    return 0;
}






// int main(){
//     int a = 10,b= 20;

//     int c;
//     c = a; //10
//     a = b; //20
//     b = c; //10

//     return 0;
// }