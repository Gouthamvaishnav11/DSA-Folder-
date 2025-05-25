#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int>Nextgreater(vector<int>arr){
    
    // solution
    vector<int>NG(arr.size());
    stack<int>st;
    
    for(int i=arr.size()-1;i>=0;i--){
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        if(st.empty()){
            NG[i]= -1;
        }
        else{
            NG[i]=st.top();

        }
        st.push(arr[i]);

    }
    return NG;



}

int main(){
    vector<int>arr={6,8,0,1,3,5};

    vector<int>NG=Nextgreater(arr);


    for(int val :NG){
        cout<<val<<" ";
    }
    cout<<endl;

   return 0;


}
