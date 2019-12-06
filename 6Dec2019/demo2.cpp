#include<iostream>
using namespace std;

class Rectangle{
    int length,breadth;
    public:
        Rectangle(){
            length = 0;
            breadth = 0;
        }

        Rectangle(int l,int b){
            length = l;
            breadth = b;
        }

        Rectangle(int num){
            length = num;
            breadth = num;
        }

        void printArea(){
            cout<<"Area = "<<length*breadth<<endl;
        }
};

int main(){
    Rectangle r1;
    r1.printArea();

    int l,b;
    cout<<"Enter the length and breadth"<<endl;
    cin>>l>>b;

    Rectangle r2(l,b);
    r2.printArea();




    return 0;
}