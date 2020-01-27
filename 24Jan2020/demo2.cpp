#include<iostream>
#include<queue>
using namespace std;


int main(){
    queue<int> q;

    q.push(100);
    q.push(200);
    q.push(300);
    q.push(400);
    q.push(500);

    cout<<"Queue Size = "<<q.size()<<endl;
    cout<<"Front = "<<q.front()<<endl;
    cout<<"Back = "<<q.back()<<endl;
    
    q.pop();

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }




    return 0;
}