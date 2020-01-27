#include<iostream>
using namespace std;


namespace New{
    
    void input();
    class Student;
}


class New::Student{
    int id;
    string name;

    public:
        void input();
};

void New::input(){
    cout<<"Input Directly inside the New"<<endl;
}

void New::Student::input(){
    cout<<"Input of Student Class"<<endl;
}



int main(){
    New::Student obj;
    obj.input();

    New::input();

    return 0;
}