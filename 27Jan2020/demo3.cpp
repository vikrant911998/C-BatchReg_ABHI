#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){
    vector<int> v1;//{67,68,69,70,71,72}

    for(int i=67;i<73;i++){
        v1.push_back(i);
    }
    vector<int>::iterator ptr;

    ptr = v1.begin();

    cout<<"Initial Iterator Value "<<*ptr<<endl;

    advance(ptr,5);
    cout<<"Advance Iterator Value "<<*ptr<<endl;

    return 0;
}