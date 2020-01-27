//Namespace Demo

#include<iostream>
using namespace std;

namespace NewSpace{

    void show(){
        cout<<"Show function inside the NewSpace "<<endl;
    }

}

namespace MySpace{
    int a = 10;
    void show(){
        cout<<"Show Function inside the Myspace"<<endl;
    }
}

using namespace NewSpace;

int main(){
    show(); //Directly refer to the show of namespace NewSpace due to line no 21.
    // NewSpace::show(); ->Need to use this if not using line no 21.
    
    
    cout<<"A's Value = "<<MySpace::a<<endl;
    MySpace::show(); //referring to show of MySpace namespace.

    return 0;
}