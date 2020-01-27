#include<iostream>
using namespace std;


namespace New{
    int a = 10;

    void show();
}

void New::show(){
    cout<<"Show Defined outside New but declared inside the namespace New"<<endl;
}



int main(){
    New::show();

    return 0;
}