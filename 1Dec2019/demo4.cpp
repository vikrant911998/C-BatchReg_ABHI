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
        cout<<"Choose the patron from below :-"<<endl;
        for(int i=0;i<sizze;i++){
            cout<<i+1<<" "<<p[i].Full_Name<<endl;
        }

        cin>>m;
        string arr[] = {"Patron ID","Zip Code"};

        cout<<"Choose the detail to be displayed from the below :-"<<endl;
        for(int i=0;i<2;i++){
            cout<<i+1<<" "<<arr[i]<<endl;
        }
        cin>>n;

        if(m<=sizze && n<=2){
            if(n == 1){
                cout<<p[m-1].Patron_ID<<endl;
            }
            else{
                cout<<p[m-1].Zip_Code<<endl;
            }
        }
    return 0;
}