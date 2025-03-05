#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5,6};

    // vector<int>::reverse_iterator i;
    for(auto i =  vec.begin(); i!=vec.end(); i++){ //forword  2.backword
        cout<< *(i)<<" ";

    }

}
