// linear search time complexity is o(n)
// linear search  program


#include<iostream>
using namespace std;

int linearsearch(int arr[],int size ,int target){
    for (int i=0; i< size ; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;

 

}
int main(){
    int arr[]={4,6,4,7,8,9,2,4,6};
    int size= 9;
    int target= 9;

    cout<< linearsearch(arr ,size,target) << endl;
    return 0;

}
 
