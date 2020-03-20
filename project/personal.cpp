#include<iostream>
using namespace std;

class PersonalInformation{
    string firstName;
    string lastName;
    int age;
    long mobile;
    string gender;
    
    public:
        void showPersonal(){
            cout<<"firstName = "<<firstName<<endl;
            cout<<"lastName = "<<lastName<<endl;
            cout<<"Age = "<<age<<endl;
            cout<<"Mobile = "<<mobile<<endl;
            cout<<"Gender = "<<gender<<endl;
        }

        void setFirstName(string firstName)
        {
            this->firstName = firstName;
        }
        void setLastName(string lastName)
        {
            this->lastName = lastName;
        }
        void setAge(int age)
        {
            this->age = age;
        }

        void setMobile(long mobile){
            this->mobile = mobile;
        }

        void setGender(string gender){
            this->gender = gender;
        }

        string getFirstName(){
            return firstName;
        }

        string getLastName(){
            return lastName;
        }

        int getAge(){
            return age; 
        }

        long getMobile(){
            return mobile;
        }

        string getGender(){
            return gender;
        }

};



