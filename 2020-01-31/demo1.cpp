#include<iostream>
using namespace std;

class Student{
    static int id;
    public:
        void generateAcc(){
            cout<<"HDFC"+to_string(id)<<endl;
            id++;
        }

};
int Student::id = 1;

int main(){
    

    Student obj,obj1,obj2,obj3;
    obj.generateAcc();
    obj1.generateAcc();
    obj2.generateAcc();
    obj3.generateAcc();

    return 0;
}