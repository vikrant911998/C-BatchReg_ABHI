#include<iostream>
#include<utility>
using namespace std;

int main(){
    pair<int ,string> p1;
    pair<string , int> p2("RollNo",101);
    pair<string, int> p3;

    p3 = make_pair("S.No.",12332);

    p1.first = 1;
    p1.second = "Name";

    cout<<p1.first<<endl;
    cout<<p1.second<<endl;

    cout<<p2.first<<endl;
    cout<<p2.second<<endl;

    cout<<p3.first<<endl;
    cout<<p3.second<<endl;

    return 0;
}
