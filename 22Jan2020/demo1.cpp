#include<iostream>
using namespace std;

//Function to determine number of distinct digits in the previous term and the frequency of each distinct digit
int DistinctDigit(int digits[], int dd[], long long int num, int count1){

    int i=0;
    while(num>0){
        int a1= num%10;
        digits[i]= a1;
        num=num/10;
        i++;
    }

    int countt=0;
    int element=1;
    int j=0;
    while(element<=9){
        for(int i=0; i<20; i++){
            if(digits[i]==element){
                countt=countt+1;
            }
        }

        dd[j]=countt;
        j++;
        element++;
        countt=0;
    }

    for(int i=0; i<9; i++){
        if(dd[i]>0){
            count1=count1+1;
        }
    }

    return count1;
}

//Function to determine the power of a number
int pow(int a, int b, long long int result){
        for(int i=0; i<b; i++){
        result= result*a;
    }

    return result;
}

//Function to determine the next term in LookNSay series
int NextTerm(int n, int arr2[], long long int next){

    int l=2*n;
    int j=1;
    for(int i=0; arr2[i]!=0; i++){
        next= next+ arr2[i]*pow(10,2*n-j,1)+ (i+1)*pow(10,2*n-j-1,1);
        j=j+2;
    }

    return next;
}

//Recursive function to determine the term of a LookNSay series based on the previous term
int LookNSay(int a){
    if(a<=1){
        return 1;
    }

    long long int num=LookNSay(a-1);
    int arr[20]={0};
    int arr1[9]={0};
    int countdd=DistinctDigit(arr, arr1, num, 0);

    int next1=NextTerm(countdd,arr1,0);

    return next1;

};

int main(){
    int a;
    cout<<"Enter the nth term till which to print the LooknSay Series"<<endl;
    cin>>a;
    LookNSay(a);
    cout<<endl;
    for(int i=1; i<=a; i++){
        cout<<LookNSay(i)<<" ";
    }

    cout<<endl;

    return 0;
}