#include<iostream>
using namespace std;

template <typename Temp1,typename Temp2>

// void print(int data){
//     cout<<data<<endl;
// }

// void print1(string data){
//     cout<<data<<endl;
// }

// void print2(double data){
//     cout<<data<<endl;
// }


// void print(Temp data){
//     cout<<data<<endl;
// }

Temp2 print(Temp1 data,Temp2 data2){
    cout<<data<<endl;
    return (data+data2);
}

int main(){
    // print(23);
    // print("Virkant");
    cout<<print(23.45,34)<<endl;


    return 0;
}


















// crud -> create,read,update,delete

// user -> language -> File(.txt,.rtf)

// language ->File


// RecordFile -> create(),read(),update(),delete()

// TextRecordFile   RTFRecordFile

