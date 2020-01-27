#include<iostream>
using namespace std;


class SubjectMarks{
    int english;
    int hindi;
    int maths;
    
    public:
        void setMarks(int eng,int hin, int math){
        
            english = eng;
            hindi = hin;
            maths = math;

            // cout<<this->english<<endl;
            // cout<<this->hindi<<endl;
            // cout<<this->maths<<endl;
        }

        int  getEnglish(){
            // cout<<this->english<<endl;
            return english;
        }

        int getHindi(){
            return hindi;
        }

        int getMaths(){
            return maths;
        }

};


class Student{
    string name;
    SubjectMarks marks;

    public:
        

        Student(string name){
            this->name = name;
            marks = new SubjectMarks();
        }

        SubjectMarks getMarks(){
            return this->marks;
        }
};

int main(){
    Student object("Vikrant");

    // SubjectMarks obj;

    
    object.getMarks().setMarks(34,45,76);
    cout<<"English Marks = "<<object.getMarks().getEnglish()<<endl;

    // obj.setMarks(34,45,76);
    // obj.getEnglish();

    
    return 0;
}