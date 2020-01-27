#include<iostream>
#include<vector>

using namespace std;


int main(){

    vector<int> v1;

    for(int i=10 ; i<15;i++){
        v1.push_back(i);
    }
    // {10,11,12,13,14}

    cout<<"Element at Index 3 = "<<v1[3]<<endl;
    cout<<"Element at Index 2 = "<<v1.at(2)<<endl;
    cout<<"Front Element  = "<<v1.front()<<endl;
    cout<<"Last Element  = "<<v1.back()<<endl;
    cout<<"Current Element = "<<   *(v1.data()+2)  <<endl;

    cout<<endl;


    return 0;
}