// Majority element  by brute force 
// #include<iostream>
// #include<vector>

// using namespace std;
// int majorityelement(vector<int>& nums){
//     int n=nums.size();
//     for(int val : nums){
//         int freq = 0;

//         for( int el : nums){
//             if(el == val){
//                 freq ++;

//             }
//         }
//         if(freq > n/2){
//             return val;



//         }
//     }
// }


// majority element by optimize approach using moore's voting algortim

// #include<iostream>
// #include<vector>

// using namespace std;
// int majorityelement(vector<int>& nums){
//     int freq =0 ,ans =0,n;

//     for(int i= 0 ; i< n; i++){
//         if(freq = 0){
//             ans = nums[i];
//         }
//          if(ans==nums){
//             freq++;
//         }
//         else{
//             freq--;
//         }
//     }
//     return ans;

// }


