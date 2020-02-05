#include<iostream>
#include<map>
#include<vector>
using namespace std;

class Student{

};

int main(){

    map<int, map<int,Student> > list;

    // list.insert( pair<int,string>(101,"Vikrant") );
    // list.insert( pair<int,string>(102,"Rahul") );
    // list.insert( pair<int,string>(103,"Vikas") );
    // int id = 102;

    // map<int,string>::iterator i;
    // for(i =list.begin() ; i != list.end() ; i++){
    //     // cout<<"Id = "<<i->first<<endl;
    //     // cout<<"Name = "<<i->second<<endl;
    //     if(id == i->first){
    //         cout<<"Name = "<<i->second<<endl;
    //     }
    // }
    return 0;
}