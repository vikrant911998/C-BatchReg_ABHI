#include<iostream>
using namespace std;

typedef struct Patron{
    long int Patron_ID;
    string Full_Name;
    long int Zip_Code;
}pat;

    int main(){
        int sizze=0;
        

        cout<<"Enter the number of patrons:"<<endl;
        cin>>sizze;
        cout<<endl;

        pat p[sizze];

        pat p1;
        for(int i=0; i<sizze; i++){
            cout<<"Enter Information for Patron "<<i+1<<":"<<endl;
            cout<<"Patron ID: ";
            cin>>p1.Patron_ID;

            cout<<"Full Name: ";
            cin>>p1.Full_Name;

            cout<<"Zip Code: ";
            cin>>p1.Zip_Code;

            
            p[i] = p1;
        }

        int m, n;

        cout<<"From the following list select a patron number whose information you need to gather:"<<endl;
        for(int i=0; i<sizze; i++){
            cout<<i+1<<". "<<p[i].Full_Name<<endl;
        }
        cin>>m;
        cout<<endl;

        cout<<"Select a data point pertaining to the selected patron to be printed:"<<endl;
        string arr[2]={"Patron ID", "Zip Code"};
        for(int j=0; j<2; j++){
            cout<<j+1<<". "<<arr[j]<<endl;
        }
        cin>>n;
        cout<<endl;

        string arr1[2]={"Patron_ID", "Zip_Code"};

        cout<<"Information pertaining to "<<arr[n-1]<<" for Patron- "<<p[m-1].Full_Name<<":"<<endl;
        if(m<=sizze && n<=2){
            cout<<p[m-1].arr1[n-1]<<endl;
        }
        else{
            if(m>sizze || n>2){
                cout<<"Invalid choices"<<endl;
            }
        }

        return 0;
    }