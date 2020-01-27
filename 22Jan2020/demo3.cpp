#include<iostream>
#include<array>
using namespace std;


int main(){
    //array< datatype, size >
    array<int,10> list = {41,20,3,44,56,16,71,82,0,0};
    

    cout<<list.at(5)<<endl;
    cout<<list[5]<<endl;
    cout<<list.front()<<endl;
    cout<<list.back()<<endl;
    cout<<list.size()<<endl;
    cout<<list.max_size()<<endl;
    


    return 0;
}