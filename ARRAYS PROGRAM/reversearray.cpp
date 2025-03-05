// reverse an array
// the time complextiy= o(n)

#include<iostream>
using namespace std;

void reversearray(int arr[],int sz){
    int start=0,end=sz-1;

    while (start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;


    }
    
}

int main(){
    int arr[]={4,5,6,7,8,3,2,1,10};
    int sz=9;

    reversearray(arr, sz);

    for(int i=0 ; i<sz ; i++){
        cout<< arr[i] << " ";

    }
    cout<< endl;

    return 0;



}


