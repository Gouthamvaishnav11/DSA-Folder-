#include<iostream>
#include<vector>
using namespace std;


int binnarysearch(vector<int>arr, int target){  //iterative code.
    int st=0,end=arr.size()-1;

    while(st <= end){
        int mid = st+ (end  - st)/2;

        if(target > arr[mid]){
            st = mid +1;
        }
        else if (target< arr[mid]){
            end= mid-1;
        }
        else{
            return mid;
        }

    }
    return -1;
}

int main(){
    // vector<int>arr1={-1,0,3,4,5,9,12};//odd
    // int target =9;

    // cout<<binnarysearch(arr1,target)<<endl;


    vector<int> arr ={-1 , 0 , 3, 5, 9, 12};//even
    int target1 =0;
     cout<<binnarysearch(arr,target1)<<endl;

}

