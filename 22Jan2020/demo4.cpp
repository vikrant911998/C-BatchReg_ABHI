#include<iostream>
#include<array>
using namespace std;


int main(){
    //array< datatype, size >
    array<int,10> list = {41,20,3,44,56,16,71,82,0,0};
    array<int,10> list1 ;
    list1.fill(55);

    for(int i=0;i<10;i++){
        cout<<list[i]<<"  and "<<list1[i]<<endl;
    }
    list1.swap(list);

    for(int i=0;i<10;i++){
        cout<<list[i]<<"  and "<<list1[i]<<endl;
    }

    return 0;
}