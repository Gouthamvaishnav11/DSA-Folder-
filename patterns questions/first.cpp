/* 
*****
*****
*****
*****
***** 
*/
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int i=1 ;i<=5 ;i++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

/*

*
**
***
****
*****

*/

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=5;i++){
//         for(int j=1 ; j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


/*
   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0; i<n;i++){
        for(int j=0; j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;

    }

    // for the lower bound
    for(int i=n-2;i>=0;i--){
        for(int j=0; j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;

    }
}

