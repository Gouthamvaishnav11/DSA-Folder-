#include<iostream>
#include<vector>
using namespace std;
class CicularQueue{
    int *arr;
    int currsize,cap;
    int f,r;

public:
   CicularQueue(int size){
     cap= size;
     arr= new int[cap];
     currsize =0;
     f=0;
     r = -1;
   }

   void push(int data){
    if(currsize == cap){
        cout<<"the circular is full";
        return ;
    }
    r=(r + 1)% cap;
    arr[r]=data;
    currsize++;


   }

   void pop(){
    if(empty()){
        cout<<"the circular is full";
        return ;
    }
    f=(f + 1)% cap;
    
    currsize--;


   }

   int front(){
    if(empty()){
        cout<<"the circular is full";
        return -1;
    }

    return arr[f];
   }

   bool empty(){
      return currsize == 0;
   }

   void printarr(){
    for( int i=0; i<cap ;i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
   }

};
int main(){

    CicularQueue cq(4);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    
    cq.pop();
    cq.push(4);
    cq.front();

    // cq.printarr();
    while(!cq.empty()){
    cout<<cq.front()<< " ";
    cq.pop();
  }

}