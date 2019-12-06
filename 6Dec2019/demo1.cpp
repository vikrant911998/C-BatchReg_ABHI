#include<iostream>
using namespace std;

class Student{
    private:
        int i;
    public:
        //Constructor Overloading.
        Student(){
            // i = 10;
            cout<<"Default Constructor of Class Student"<<endl;
            // cout<<"I's value is "<<i<<endl;
        }
        Student(int a){
            i = a;
            cout<<"Parameter Constructor of Class Student"<<endl;
        }
        
};

int main(){
    Student ram,shyam(23);
   

    return 0;
}