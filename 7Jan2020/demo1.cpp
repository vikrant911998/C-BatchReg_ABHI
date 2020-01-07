//Exception Handling Example.

#include<iostream>
using namespace std;

class Employee{
    int empid;
    string name;
    char arr[10]={'0','1','2','3','4','5','6','7','8','9'};
    public: 
        void input(){
            int id;
            string n;

            cout<<"Enter the Employee ID"<<endl;
            cin>>id;
            while(true){
                try{
                    if(id > 0){
                        empid = id;
                        break;
                    }
                    else{
                        throw id;
                    }
                }
                catch(int exception){
                    cout<<"Invalid Id Input try ID in positive Number"<<exception<<endl;

                    cout<<"Enter the Employee ID Again"<<endl;
                    cin>>id;
                }
                catch(...){
                    cout<<"Invalid Id Input "<<endl;

                    cout<<"Enter the Employee ID Again"<<endl;
                    cin>>id;
                }
            }
            cout<<"Enter the Name "<<endl;
            cin>>n;
            
            int i;
            while(true){
                try{
                   for( i=0;i<n.length();i++){
                       for(int j=0;j<10;j++){
                           if(n[i] == arr[j]){
                               throw n;
                           }
                       }
                   } 

                   if( i == n.length() ){
                       name = n;
                       break;
                   }

                }
                catch(string s){
                    cout<<"Invalid Name Exception Try name without any Number  "<<n<<endl;


                    cout<<"Enter the Name Again "<<endl;
                    cin>>n;
                }
                catch(...){
                    cout<<"Invalid Name Exception "<<endl;


                    cout<<"Enter the Name Again "<<endl;
                    cin>>n;
                }
            }

            cout<<"Input Ended"<<endl;
        }


        void output(){
            cout<<"Id = "<<empid<<endl;
            cout<<"Name = "<<name<<endl;
        }
};



int main(){

    Employee obj;
    obj.input();
    obj.output();

    return 0;
}