#include<iostream>
using namespace std;

class LoanInformation{
    private:
        string type;
        double loanAmount;
        double roi;
        double loanPercentage;
        int duration;
        int  customer_score;

    public:

        void setScore(int s1){
            cout<<"Score = "<<customer_score<<endl;
            cout<<"Score Args = "<<s1<<endl;
            customer_score = s1;
            cout<<"Score = "<<customer_score<<endl;
            cout<<&this->customer_score<<endl;
        }

        int getScore(){
            return customer_score;
        }

        void setDuration(int duration){
            this->duration = duration;
        }

        int getDuration(){
            return duration;
        }

        void setLoanPercentage(double loanPercentage){
            this->loanPercentage = loanPercentage;
        }

        double getLoanPercentage(){
            return loanPercentage;
        }

        void setRoi(double roi){
            this->roi = roi;
        }

        double getRoi(){
            return roi;
        }

        void setLoanAmount(double loanAmount){
            this->loanAmount = loanAmount;
        }

        double getLoanAmount(){
            return loanAmount;
        }

        void setType(string type){
            cout<<"Score = "<<customer_score<<endl;
            this->type = type;
        }

        string getType(){
            return type;
        }

};