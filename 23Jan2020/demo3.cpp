#include<iostream>
#include<vector>

using namespace std;


int main(){

    vector<int> v1;

    for(int i=10 ; i<15;i++){
        v1.push_back(i);
    }

    for(int i=0;i<5;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    v1.push_back(100);
    v1.push_back(200);

    for(int i=0;i<7;i++){
        cout<<v1[i]<<" ";
    }

    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    
    cout<<endl;

    for(int i=0;i<4;i++){
        cout<<v1[i]<<" ";
    }




    cout<<endl;
    return 0;
}