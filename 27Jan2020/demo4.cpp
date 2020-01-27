#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){
    vector<int> v1;//{67,68,69,70,71,72}

    for(int i=67;i<73;i++){
        v1.push_back(i);
    }
    vector<int>::iterator ptr,f1,f2;

    ptr = v1.begin();

    cout<<"PTR Iterator Value "<<*ptr<<endl;

    f1 = next(ptr,3);

    cout<<"PTR Iterator Value "<<*ptr<<endl;
    cout<<"F1 Iterator Value "<<*f1<<endl;

    f2 = prev(ptr,2);

    cout<<"PTR Iterator Value "<<*ptr<<endl;
    cout<<"F1 Iterator Value "<<*f1<<endl;
    cout<<"F2 Iterator Value "<<*f2<<endl;

    return 0;
}