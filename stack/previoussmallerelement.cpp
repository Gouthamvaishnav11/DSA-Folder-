#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main(){
    vector<int>arr={3,1,0,8,6};

    // solution find the previous smaller element 
    stack<int>s;
    vector<int>ps(arr.size());

    for(int i=0;i<arr.size();i++){
    while(s.size()>0 && s.top()>=arr[i]){
        s.pop();

    }
    if(s.empty()){
            ps[i]= -1;
        }
        else{
            ps[i]=s.top();

        }
        s.push(arr[i]);

    }
    for(int val :ps){
        cout<<val<<" ";
    }
    cout<<endl;

   return 0;


}


