//create a function which take two arguments length and breadth of rectangle and returns it's area?

#include<iostream>
using namespace std;
int area(int,int);

int main(){
    int length,breadth;

    cout<<"Enter the length and breadth"<<endl;
    cin>>length>>breadth;

    // int result = area(length,breadth);

    cout<<"Rectangle Area is "<<area(length,breadth)<<endl;

    return 0;
}

int area(int l, int b){
    return (l*b);
}