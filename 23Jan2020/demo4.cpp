#include<iostream>
#include<vector>

using namespace std;


int main(){

    vector<int> v1;

    v1.push_back(10);
    v1.push_back(20);

    cout<<v1.data()<<endl;
    cout<<v1.begin()<<endl;
    


    return 0;
}