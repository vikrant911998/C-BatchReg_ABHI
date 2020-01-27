#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40); //push ->add element to the Stack.

    cout<<"Size of Stack = "<<s1.size()<<endl; //It tells the size of the stack.
    cout<<"Is Empty = "<<s1.empty()<<endl; //It tells whether the stack is empty or not.
    cout<<"Top Element  = "<<s1.top()<<endl; //It gives the top element of the Stack.


    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }



    return 0;
}