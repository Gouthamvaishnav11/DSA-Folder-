#include<iostream>
#include<vector>
using namespace std;
 


class stack{
    vector<int>v;

public:
    
     void push(int val){//O(1)
        v.push_back(val);

     }

     void pop(){
        v.pop_back();

     }

     int top(){
        return v[v.size()-1];

     }

     bool empty(){
        return v.size() ==0;
     }

};

int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);


    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
        


    }
    cout<<endl;
    return 0;
    

  

}