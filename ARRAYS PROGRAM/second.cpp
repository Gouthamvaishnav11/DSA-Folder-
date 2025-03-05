#include<iostream>
using namespace std;

void changearr(int arr[],int size){
    cout << "in function \n";
    for(int i=0 ; i< size ; i++){
        arr[i] = 2+ arr[i];
    }
}

int main(){
    int arr[]={1,2,4};

    changearr(arr,3);

    cout<<"In main \n";
    for(int i=0 ;i<3 ; i++){
        cout<< arr[i] << " ";


    }
    cout << endl;

    return 0;

    
}

