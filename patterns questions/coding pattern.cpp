/*
1 1 1 1
1 1 1 1
1 1 1 1
1 1 1 1
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i =1;i<=n ; i++){
//         for(int j=1; j<=n;j++){
//             cout<<"1";
//         }
//         cout<<endl;

//     }
// }

/*
1234
1234
1234
1234
*/
// n=4 , m=4
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n=4;
//      for(int i=1; i<=n ;i++){
//          for(int j=1; j<=n ;j++){
//              cout<< j ;
//          }
//          cout  << endl;
//      }
//  }

/*
12345
1234
123
12
1*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=1; i<=n;i++){
//         for(int j=1; j<=n-i +1;j++){
//             cout<< j ;
//         }
//         cout<< endl;

//     }
// }

/*
 *
 **
 ***
 ****
 ******
 */
// #include<iostream>
// using namespace std;
// int  main(){
//     int n=5;
//     for(int i=1 ; i<=n ;i++){
//         for(int j=1 ; j<=i ; j++){
//             cout<< "*" ;

//         }
//         cout<< endl;
//     }
// }
/*
*****
****
***
**
*


*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=1; i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             cout<<" * ";
//         }
//         cout<<endl;

//     }
// }

/*
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4,m=4, num=1;
//        for(int i=1; i<=n;i++){
//         for(int j=1;j<=m;j++){
//             cout<< num ;
//             num++;
//         }
//         cout<<endl;
// }
// }

/*

* * * *
*     *
*     *
* * * *



*/
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;
//     for (int i = 1; i <= n; i++) { 
//         for (int j = 1; j <= n; j++){ 
//             if (i == 1 || i == n || j == 1 || j == n){
//                 cout << "* ";
//             }
//             else{
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
// }


/*
1  2  3   4
5         6 
7         8 
9         10
11 12 13  14


*/

// #include<iostream>
// #include <iomanip>

// using namespace std;
// int main(){
//     int n =5,m=4,num=1;
//     for (int i = 1; i <= n; i++) { 
//         for (int j = 1; j <= m; j++){ 
//             if(i==1 || i==n || j==1|| j==m){
//                 cout<<setw(3)<< num;
               
//             }
//             else{
//                 cout<< "  ";
//             }
//             num++;
            
//         }
//         cout<<endl;
//     }
// }


/*
        *
      * * *
    * * * * *
  * * * * * * *
  * * * * * * *
    * * * * *
      * * *
       * *  
        *  
    

*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//      // Upper Pyramid
//      for (int i = 1; i <= n; i++) {
//         for (int j = i; j < n; j++) {
//             cout << "  ";
//         }
        
//         for (int k = 1; k <= (2 * i - 1); k++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     // Lower Inverted Pyramid
//     for (int i = n; i >= 1; i--) {
//         for (int j = n; j > i; j--) {
//             cout << "  ";
//         }
        
//         for (int k = 1; k <= (2 * i - 1); k++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }

// }

/*
        *
      * *
    * * *
  * * * *
* * * * *


*/
#include<iostream>
using namespace std;
int main(){
    int  n=5;
      for(int i=1; i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";;
        }
  
        for(int k=1 ;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
       

      }
      
}