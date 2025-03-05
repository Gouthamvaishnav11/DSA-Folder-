#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr,int st,int end){ // in avg case tc:O(nlogn) and in worst case O(n2)
    int idx=st-1, pivot=arr[end];

    for(int j = st ; j<end ;j++){
        if(arr[j] <= pivot){
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
    idx++;
    swap(arr[end],arr[idx]);
    return idx;
}

void quicksort(vector<int>& arr,int st, int end){
   if(st<end){
    int pivotidx =partition(arr,st,end);

   
    quicksort(arr, st,pivotidx-1); //left
    quicksort(arr,pivotidx+1,end); //right
   }


}


int main(){
    vector<int> arr = {12,44,11,66,88, 45,55};

    quicksort(arr,0,arr.size()-1);

    for(int val : arr){
        cout<<val<<" ";
        
    }
    cout<<endl;
    return 0;

}