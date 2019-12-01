#include<iostream>
using namespace std;

typedef struct Patron{
    int Patron_ID;
    string Full_Name;
    int Zip_Code;
}patron;

    int main(){
        int sizze=0;
        

        cout<<"Enter the size of the array"<<endl;
        cin>>sizze;
        cout<<endl;

        patron p[sizze];

        patron p1;
        for(int i=0; i<sizze; i++){
            cout<<"Enter Information for Patron "<<i+1<<":"<<endl;
            cout<<"Patron ID: ";
            cin>>p1.Patron_ID;

            // cin.ignore(INT_MAX,'\n');

            cin.clear();

            cout<<"Full Name: ";
            // cin>>p1.Full_Name;
            getline(cin,p1.Full_Name);

            cout<<"Zip Code: ";
            cin>>p1.Zip_Code;

            p[i]= p1;

        }

        for(int j=0; j<sizze; j++){

            cout<<"Information pertaining to Patron "<<j+1<<":"<<endl;
            cout<<"Patron ID: "<<p[j].Patron_ID<<endl;
            cout<<"Full Name: "<<p[j].Full_Name<<endl;
            cout<<"Zip Code: "<<p[j].Zip_Code<<endl;
        }


        return 0;
    }
