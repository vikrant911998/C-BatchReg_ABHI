#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){
    vector<int> v1,v2; //{67,68,69,70,71,72}


    for(int i=67;i<73;i++){
        v1.push_back(i);
    }

    for(int i=10;i<15;i++){
        v2.push_back(i);
    }

    vector<int>::iterator ptr = v1.begin();

    advance(ptr,4);

    // copy(v2.begin()+2,v2.end(),inserter(v1,ptr)); ->It will insert the specified elements of v2 in v1 at specified position without deleting any elements of v1.
    copy(v2.begin()+1,v2.end(),ptr); //->It will insert the specified elements of v2 in v1 by overwriting the elements from the specified position and keeping the size of v1 same as earlier.

    for(ptr = v1.begin() ; ptr<v1.end() ; ptr++){
        cout<<*ptr<<"  ";
    }
    cout<<endl;



    return 0;
}