// binary search using recursion 
#include<iostream>
#include<vector>
using namespace std;

int recbinarysearch(vector<int> arr, int target, int st,int end){
    if(st<=end){
        int  mid=st+(end-st)/2;
        if(target > arr[mid]){//2nd half
            return recbinarysearch(arr,target,mid+1,end);
        }
        else if(target<arr[mid]){//1st half
            return recbinarysearch(arr,target,mid-1,st);
        }
        else{
            return mid;
        }
        
        
    }
    return -1;


}
int main(){
         vector<int>arr={1,2,8,21,32,44};
         int target=21;
         cout<<recbinarysearch(arr,target,0,arr.size()-1)<<endl;

 }
