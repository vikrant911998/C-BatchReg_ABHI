#include<iostream>
using namespace std;

int main(){
    int result;
    
    const string InvalidNameException = "InvalidNameException";

    const string InvalidAgeException = "InvalidAgeException";

    cout<<"Enter the Number"<<endl;
    cin>>result;


    try{
        if(result < 0){
            throw result;
        }
        int square = result*result;
        
        try{
            if(square < 50){
                throw InvalidNameException;
            }
        }
        catch(string s){
            cout<<"404 Handled here.."<<endl;
        }
        // catch(...){

        // }

    }
    catch(int x){

    }
    // catch(...){

    // }

    return 0;
}