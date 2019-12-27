#include<iostream>
using namespace std;

class Customer{
    string customer_name;
    int customer_age;
    public:
        void input(){
            cout<<"Enter the Customer Name"<<endl;
            cin>>customer_name;
            cout<<"Enter the Customer Age"<<endl;
            cin>>customer_age;
        }

        void output(){
            cout<<"Customer Name : "<<customer_name<<endl;
            cout<<"Customer Age : "<<customer_age<<endl;
        }

};

class Account{
    string type;
    public:
        void input(){
            cout<<"Enter the Account Type"<<endl;
            cin>>type;
        }

        void output(){
            cout<<"Account Type : "<<type<<endl;
        }

};

class RBI{
    protected:
        Customer c; //HAS-A Relation
        Account a;

    public:
        void input(){
            c.input();
            a.input();
        }
        void output(){
            c.output();
            a.output();
        }
        double getInterestRate(){
            return 4;
        }

        double getWithdrawalLimit(){
            return 40000;
        }
};

class SBI : public RBI{
    public:
        double getInterestRate(){
            return 4.5;
        }
        double getWithdrawalLimit(){
            return 32000;
        }
};

int main(){
    SBI obj;
    obj.input();
    obj.output();
    cout<<"Interest Rate = "<<obj.getInterestRate()<<endl;
    cout<<"Withdrawal Limit  = "<<obj.getWithdrawalLimit()<<endl;

    return 0;
}
