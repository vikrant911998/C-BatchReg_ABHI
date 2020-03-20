
#include "customer.cpp"


#define SOURCING 1
#define QDE 2
#define DEDUPE 3
#define SCORING 4
#define APPROVAL 5
#define EMI 6
#define HL 3
#define EL 2
#define AL 8



int count = 1;
int k=0;


class LosProcess{
    Customer customerList[50];
    
    
    public:
        Customer * getNegativeCustomers(){
            Customer arr[2];
            PersonalInformation personal;
            Customer customer;

            personal.setFirstName("Rahul");
            personal.setLastName("Kumar");
            personal.setGender("male");
            personal.setAge(26);
            personal.setMobile(1234565433);

            customer.setPersonal(personal);
            arr[0] = customer;

            personal.setFirstName("Rohit");
            personal.setLastName("Singh");
            personal.setGender("male");
            personal.setAge(29);
            personal.setMobile(7654565433);

            customer.setPersonal(personal);
            arr[1] = customer;

            return arr;
        }

        void sourcing(){
            Customer customer;

            customer.setStage(SOURCING);
            customer.setApplicationNumber(::count);
            ::count++;

            PersonalInformation personal;
            string firstName,lastName,gender;
            int age;
            long mobile;

            cout<<"Enter the FirstName"<<endl;
            cin>>firstName;
            cout<<"Enter the LastName"<<endl;
            cin>>lastName;
            cout<<"Enter the gender"<<endl;
            cin>>gender;
            cout<<"Enter the age"<<endl;
            cin>>age;
            cout<<"Enter the Mobile"<<endl;
            cin>>mobile;

            personal.setFirstName(firstName);
            personal.setLastName(lastName);
            personal.setGender(gender);
            personal.setAge(age);
            personal.setMobile(mobile);

            customer.setPersonal(personal);

            LoanInformation loanInfo;
            string type;
            int duration;
            double amount;

            cout<<"Enter the Loan Type : HL(Home Loan),AL(Automobile Loan),EL(Education Loan)"<<endl;
            cin>>type;
            cout<<"Enter the Duration"<<endl;
            cin>>duration;
            cout<<"Enter the Loan Amount"<<endl;
            cin>>amount;

            loanInfo.setType(type);
            loanInfo.setDuration(duration);
            loanInfo.setLoanAmount(amount);

            customer.setLoanInfo(loanInfo);

            customerList[k] = customer;
            k++;

            customer.getPersonal().showPersonal();
            cout<<"Stage = "<<customer.getStage()<<endl;
            cout<<"Your Application Number = "<<customer.getApplicationNumber()<<endl;
        }

        void qde(Customer customer){
            cout<<"Inside QDE Stage"<<endl;
            // customer.setStage(QDE);
            // cout<<"Stage inside QDE = "<<customer.getStage()<<endl;
            double income;
            double liability;

            cout<<"Enter the Income"<<endl;
            cin>>income;
            cout<<"Enter the Liability"<<endl;
            cin>>liability;

            for(int i=0;i<k;i++){
                if(customerList[i].getApplicationNumber() == customer.getApplicationNumber()){
                    customerList[i].setStage(QDE);
                    customerList[i].setIncome(income);
                    customerList[i].setLiability(liability);
                }
            }

        }

        void dedupe_check(Customer customer){
            cout<<"Inside DEDUPE Stage"<<endl;
            // customer.setStage(DEDUPE);

            for(int i=0;i<k;i++){
                if(customerList[i].getApplicationNumber() == customer.getApplicationNumber()){
                    customerList[i].setStage(DEDUPE);
                }
            }

            int negative_score = 0;

            Customer *neg_list = getNegativeCustomers();

            for(int i=0;i<2;i++){
                
                if(neg_list[i].getPersonal().getFirstName() == customer.getPersonal().getFirstName()){
                    negative_score += 50;
                }

                if(neg_list[i].getPersonal().getLastName() == customer.getPersonal().getLastName()){
                    negative_score += 50;
                }
            }

            if(negative_score >=100){
                cout<<"You are a Defaulter, So No Run to London"<<endl;
                exit(0);
            }
            
        }

        void scoring(Customer customer){
            cout<<"Inside Scoring Stage "<<endl;
            int score = 0;
            if(customer.getPersonal().getAge() >= 25){
                score +=5;
            }

            if(customer.getIncome() >= (20*customer.getLoanInfo().getLoanAmount())/100){
                score += 5;
            }

            // cout<<"Your SCORE is "<<score<<endl;
            // cout<<"Your SCORE in list is "<<customerList[0].getLoanInfo().getScore()<<endl;

            
            for(int i=0;i<k;i++){
                if(customerList[i].getApplicationNumber() == customer.getApplicationNumber()){
                    customerList[i].setStage(SCORING);
                    customerList[i].getLoanInfo().setScore(score);
                    // cout<<"Your SCORE is "<<customerList[i].getLoanInfo().getScore()<<endl;
                    break;
                }
            }
            cout<<"Your SCORE is "<<customerList[0].getLoanInfo().getScore()<<endl;
        }

        void approval(Customer customer){
            cout<<"Inside APPROVAL Stage "<<endl;

            for(int i=0;i<k;i++){
                if(customerList[i].getApplicationNumber() == customer.getApplicationNumber()){
                    customerList[i].setStage(APPROVAL);
                    
                    if(customerList[i].getLoanInfo().getScore() >= 1 && customerList[i].getLoanInfo().getScore() <= 5 ){
                        cout<<"Your 50% Loan Amount has been approved"<<endl;
                        customerList[i].getLoanInfo().setLoanPercentage(50);
                    }
                    else if( customerList[i].getLoanInfo().getScore() >= 6 && customerList[i].getLoanInfo().getScore() <= 10 ){
                        cout<<"Your 100% Loan Amount has been approved"<<endl;
                        customerList[i].getLoanInfo().setLoanPercentage(100);
                    }
                    else{
                        cout<<"Oops, Your Loan Has been denied"<<endl;
                        customerList[i].getLoanInfo().setLoanPercentage(0);

                        exit(0);
                    }

                }
            }

        }

        void emi(Customer customer){
            cout<<"Inside EMI Stage "<<endl;

            for(int i=0;i<k;i++){
                if(customerList[i].getApplicationNumber() == customer.getApplicationNumber()){
                    
                    if(customerList[i].getLoanInfo().getType() == "HL"){
                        customerList[i].getLoanInfo().setRoi(HL);
                    }
                    else if(customerList[i].getLoanInfo().getType() == "EL"){
                        customerList[i].getLoanInfo().setRoi(EL);
                    }
                    else{
                        customerList[i].getLoanInfo().setRoi(AL);
                    }

                    double principal = (customerList[i].getLoanInfo().getLoanAmount()*customerList[i].getLoanInfo().getLoanPercentage())/100;

                    double interest = (principal*customerList[i].getLoanInfo().getRoi()*customerList[i].getLoanInfo().getDuration())/100;

                    double emi_month = (principal+interest)/(12*customerList[i].getLoanInfo().getDuration());

                    cout<<"Your EMI is "<<emi_month<<endl;

                    break;

                }
            }

        }


        void moveToNextStage(int applicationNumber){
            // cout<<"Inside Move to Next Stage"<<endl;
            Customer localCustomer;

            for( int i=0;i<k;i++ ){
                if(customerList[i].getApplicationNumber() == applicationNumber){
                    localCustomer = customerList[i];        
                }
            } 

            if(localCustomer.getStage() == 1){
                qde(localCustomer);
            }
            else if(localCustomer.getStage() == 2){
                dedupe_check(localCustomer);
            }
            else if(localCustomer.getStage() == 3){
                scoring(localCustomer);
            }
            else if(localCustomer.getStage() == 4){
                approval(localCustomer);
            }
            else if(localCustomer.getStage() == 5){
                emi(localCustomer);
            }

        }

        bool checkStage(int applicationNumber){
            // cout<<"Inside CheckStage "<<endl;
            bool isFound = false;

            for( Customer customer:customerList ){
                if(customer.getApplicationNumber() == applicationNumber){
                    isFound = true;
                    break;
                }
            }

            return isFound;
        }

};

