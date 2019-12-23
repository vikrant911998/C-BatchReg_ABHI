#include<iostream>
using namespace std;

typedef struct Patron{
    string name;
    long int acc_num;
    long int balance;

}Patron;

void print(Patron p[], int sizze){

    for(int i=0; i<sizze; i++){

        if(p[i].balance<200){
            cout<<p[i].name<<endl;
        }
    }

}

void increment(Patron p[], int sizze){

    for(int i=0; i<sizze; i++){
        if(p[i].balance>1000){
            p[i].balance=p[i].balance+100;
        }
    }
    cout<<"Following customers had their balances increased by $100 along with their increased current balance: "<<endl;

    for(int i=0; i<sizze; i++){

        if((p[i].balance-100)>1000){
            cout<<p[i].name<<" "<<p[i].balance<<endl;
        }
    }

    

}

int main(){

    int sizze;
    cout<<"Enter the number of patrons and input their information"<<endl;
    cin>>sizze;
    cout<<endl;

    Patron p[sizze];

    Patron p1;

        for(int i=0; i<sizze; i++){
            cout<<"Enter information for Patron "<<i+1<<endl;
            cout<<"Name: ";
            cin.ignore(INT_MAX, '\n');
            getline(cin, p1.name);
            cout<<"Account Number: ";
            cin>>p1.acc_num;
            cout<<"Balance: ";
            cin>>p1.balance;

            p[i]=p1;
            cout<<endl;
        }


        print(p,sizze);

        increment(p,sizze);

    return 0;
}