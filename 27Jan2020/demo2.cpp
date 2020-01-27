#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){
    vector<int> v1;

    for(int i=67;i<73;i++){
        v1.push_back(i);
    }
    vector<int>::iterator ptr;

    for( ptr = v1.begin(); ptr < v1.end();  ptr++ ){
        cout<< *ptr <<endl;
    }


    return 0;
}