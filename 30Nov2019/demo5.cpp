#include<iostream>
using namespace std;

typedef struct Student{
    int roll_no;
    string name;
}Student;


int main(){
    Student s[3]; //Structure Array.
    Student s1;

    for(int i=0;i<3;i++){
        cout<<"Enter the roll no"<<endl;
        cin>>s1.roll_no; 

        cin.ignore(INT_MAX,'\n');

        cout<<"Enter the Name"<<endl;
        // cin>>s1.name;
        getline(cin,s1.name);

        s[i] = s1;
    }

    for(int i=0;i<3;i++){
        cout<<s[i].roll_no<<endl;
        cout<<s[i].name<<endl;
        cout<<endl;
    }


    return 0;
}