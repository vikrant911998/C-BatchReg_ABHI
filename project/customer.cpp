
#include "personal.cpp"
#include "loan.cpp"


class Customer{
    int applicationNumber;
    PersonalInformation personal;
    LoanInformation loanInfo;
    int stage;
    double income;
    double liability;

    public:
        void setPersonal(PersonalInformation personal){
            this->personal = personal;
        }

        PersonalInformation getPersonal(){
            return personal;
        }

        void setLoanInfo(LoanInformation loan){
            this->loanInfo = loan;
        }

        LoanInformation getLoanInfo(){
            return loanInfo;
        }

        void setApplicationNumber(int applicationNumber){
            this->applicationNumber = applicationNumber;
        }

        int getApplicationNumber(){
            return applicationNumber;
        }

        void setStage(int stage){
            this->stage = stage;
        }

        int getStage(){
            return stage;
        }

        void setIncome(double income){
            this->income = income;
        }

        double getIncome(){
            return income;
        }
        void setLiability(double liability){
            this->liability = liability;
        }

        double getLiability(){
            return liability;
        }



};