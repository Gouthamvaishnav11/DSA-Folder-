// static and dynamic allocation

// check the capacity in vector and size of vector

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec;

    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(2);  // the capacity will we double in vector of memory it is done automatically
    vec.push_back(4);
    vec.push_back(8);


    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    return 0;




}