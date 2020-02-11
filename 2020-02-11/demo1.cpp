#include<iostream>
#include<sstream>
using namespace std;

class Student{
        int StudId;
        string StudName;
        char StudGender;
        static char arr[10];
        static string alphabet;

    public:
        void input(){
            int id=0;
            string str;
            string name;
            char gender;
            
            cout<<"Enter the Student Id: "<<endl;
            cin>>str;
            cout<<str<<endl;
            stringstream get(str);
            while(true){
                try{
                    
                    int countt=0;
                    for(char c: alphabet){
                        for(int i=0; i<str.length(); i++){
                            // cout<<"Inside if"<<endl;
                            if(str[i] == c){
                                
                                countt=countt+1;
                            }
                        }
                    }

                    get>>id;
                    cout<<"Id = "<<id<<endl;

                    if(id>0 && countt==0){
                        StudId=id;
                        break;
                    }
                    else{
                        throw id;
                    }
                }
                
                catch(...){
                    cout<<"Invalid Input. Only positive integers 0-9 allowed. Try Again!"<<endl;
                    cin>>str;
                }
            }

            cout<<endl;
            cout<<"Enter the Student name: "<<endl;
            cin.ignore(INT_MAX, '\n');
            getline(cin, name);
            while(true){
                int j=0;
                try{
                    for(j=0; j<name.length(); j++){
                        for(int i=0; i<10; i++){
                            if(name[j]==arr[i]){
                                throw name;
                            }
                        }
                    }

                    if(name.length()==j){
                        StudName=name;
                        break;
                    }
                }
                catch(...){
                    cout<<"Invalid Input. No integers allowed in the name. Try Again!"<<endl;
                    cin.ignore(INT_MAX, '/n');
                    getline(cin, name);
                }
            }

            cout<<endl;
            cout<<"Enter the gender (M/F/O): "<<endl;
            cin>>gender;
            while(true){
                try{
                    if(gender=='M' || gender=='F' || gender=='O'){
                        StudGender=gender;
                        break;
                    }
                    else{
                        throw gender;
                    }

                }
                catch(...){
                    cout<<"Invalid Input. Kindly enter either 'M' or 'F' or 'O' only. Try Again!"<<endl;
                    cin>>gender;
                }
            }
        }

        void output(){
            cout<<"Student's information is as follows:"<<endl;
            cout<<"Name: "<<StudName<<endl;;
            cout<<"Id: "<<StudId<<endl;
            cout<<"Gender: "<<StudGender<<endl;
        }

};

string Student::alphabet="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ~@#$%^&*()_+=-`[]{}\|;:,'.<>/?";
char Student::arr[]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int main(){

    Student obj;
    obj.input();
    obj.output();

    return 0;
}