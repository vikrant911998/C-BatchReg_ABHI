#include<iostream>
using namespace std;
float takeBasic();
float hra(float);
float da(float);
float ta(float);
void netSalary(float,float,float,float,int);

int main(){
    int PF = 1400;
    float basicSalary = takeBasic();
    float h = hra(basicSalary);
    float d = da(basicSalary);
    float t = ta(basicSalary);
    netSalary(basicSalary,h,d,t,PF);


    return 0;
}

void netSalary(float basic,float h,float d,float t,int PF ){
    cout<<"Net Salary = "<<(basic+h+d+t)-PF<<endl;
}

float hra(float basic){
    return (basic*0.3);
}

float da(float basic){
    return (basic*0.2);
}

float ta(float basic){
    return (basic*0.1);
}

float takeBasic(){
    float basic = 0;
    cout<<"Enter the basic Salary"<<endl;
    cin>>basic;

    return basic;
}