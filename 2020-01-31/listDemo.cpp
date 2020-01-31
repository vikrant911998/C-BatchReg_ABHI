#include<iostream>
#include<list>
using namespace std;

int main(){

    list<int>  list1;
    
    for(int i=10;i<=50;i= i+10){
        list1.push_back(i);
    }

    // list<int>::iterator it;

    // for(it = list1.begin() ; it!= list1.end(); it++){
    //     cout<<*it<<" ";

    // }
    
    cout<<endl;

    for(auto it = list1.rbegin() ; it != list1.rend(); ++it){
        cout<<*it<<" ";
    }
    
    cout<<endl;

    return 0;
}