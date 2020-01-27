#include<iostream>
using namespace std;

template <class T1,class T2>

class Pair{
    public:
        T1 first;
        T2 second;

        Pair(T1 first,T2 second){
            this->first = first;
            this->second = second;
        }

        void make_pair(T1 first,T2 second){
            
            this->temp = first = first;
            this->second = second;
        }

};

int main(){
    Pair<int,int>obj(20,21);

    obj.make_pair(23,41);

    return 0;
}
