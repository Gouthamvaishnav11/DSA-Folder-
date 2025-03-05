#include<iostream>
#include<vector>
using namespace std;

int main(){
   // vector<int>vec; //0
//   vector <int>vec ={1,2,3};
    vector <int>vec;

    cout<< "size = "<< vec.size()<<endl;
    vec.push_back(25);
    vec.push_back(45);
    vec.push_back(66);

    cout<<"After push back =" <<vec.size()<<endl;
    vec.pop_back();

    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;

    cout<<vec.at(1)<<endl;   // at is is used to see the value of index




    // for(char value: vec){ //for loop in vector
    //     cout<<value<<endl;
    

    // }
    return 0;

}


// #include<iostream>
// #include<vector>

// using namespace std;

// vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int>ans;
//         int n=nums.size();

//         for (int i = 0; i < n; i++) {
//             for(int j=i+1 ; j<n ; j++){
//                 if(nums[i] + nums[j] == target){
//                     ans.push_back(i);
//                     ans.push_back(j);
//                     return ans;
//                 }
//             }
//         }
//      return ans;
// }
// int main(){
//     vector<int> nums = {2,7,11,15};
//     int target =9;

//     vector<int>ans = twoSum(nums ,target);
//     cout<<ans[0]<<","<<ans[1] <<endl;
//     return 0;


// }
