// find the largest/smallest number in array?

#include<iostream>
using namespace std;
int main(){
    int number[5]={5,99 ,54,66,55};
    int size= 5;

    int smallest = INT_MAX;
    int largest =INT_MIN;

    for (int i=0 ; i<size ;i++){
      largest=max(number[i],smallest);
      smallest =min(number[i],smallest);
    }

    cout<<"largest = "<<largest<<endl;
    cout<<"smallest = "<<smallest<<endl;
    

   return 0;
}

// #include <iostream>
// #include <vector>
// #include <algorithm> // For std::max_element
// using namespace std;

// int main() {
//     int T; 
//     cin >> T;

//     while (T--) {
//         int N;  // Number of mountains
//         cin >> N;

//         vector<int> heights(N);  // Vector to store heights of mountains

//         // Input the heights of the mountains
//         for (int i = 0; i < N; ++i) {
//             cin >> heights[i];  // Correctly input each element into the vector
//         }

//         // Find the maximum height
//         int max_height = *max_element(heights.begin(), heights.end());

//         // Output the maximum height
//         cout << max_height << endl;
//     }

//     return 0;
// }
