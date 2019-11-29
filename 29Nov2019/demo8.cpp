#include<iostream>
using namespace std;

struct Student{ 
    int roll_no;
    string name;
};   


int main(){
    struct Student s;

    cout<<"Enter the rollno"<<endl;
    cin>>s.roll_no;

    cin.ignore(INT_MAX,'\n');
    
    cout<<"Enter the name"<<endl;
    // cin>>s.name;
    getline(cin,s.name);

    cout<<"Rollno - "<<s.roll_no<<endl;
    cout<<"Name - "<<s.name<<endl;



    return 0;
}