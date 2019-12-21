//Function Overloading 

// 1.No. of arguments are different.
// 2.Type of Arguments are different.
// 3.sequence of Arguments is different.

#include<iostream>
using namespace std;


class Math{
    public:
        
        void add(){
            cout<<"Default Add Function"<<endl;
        }

        void add(int a){
            cout<<"Add Function with one integer argument"<<endl;
        }

        void add(string a){
            cout<<"Add Function with one string argument"<<endl;
        }

        void add(int a ,string b){
            cout<<"Add Function with sequence int, string"<<endl;
        }

        void add(string b, int a){
            cout<<"Add Function with sequence string ,int"<<endl;
        }

};


int main(){
    Math obj;
    obj.add();
    obj.add(23);
    obj.add("VIkrant");
    obj.add(23,"btian");
    obj.add("brain",45);


    return 0;
}
