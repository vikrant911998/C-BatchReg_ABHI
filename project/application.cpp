
#include "losprocess.cpp"

int main(){

    LosProcess losprocess;
    int application;

    while(true){
        cout<<"Enter the Application Number , If new (Enter Zero)"<<endl;
        cin>>application;

        if(application == 0){
            
            //Sourcing Stage
            losprocess.sourcing();

        }
        else{

            //CheckStage
            bool result = losprocess.checkStage(application);


            if(!result){
                cout<<"Sorry You have Entered a wrong Application"<<endl;
                exit(0);
            }
            else{
                losprocess.moveToNextStage(application);
            }
        }
    }

    return 0;
}