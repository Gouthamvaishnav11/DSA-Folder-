// pair sum  :



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


#include<iostream>
#include<vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int n=nums.size();

        int i =0 , j=n-1;
        while ( i< j){
            int ps =nums[i] + nums[j];
            if(ps > target){
                j--;
            } else if(ps  < target ){
                i++;
            } else {

                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }


       
            
     return ans;
}
int main(){
    vector<int> nums = {2,7,11,15};
    int target =26;

    vector<int>ans = twoSum(nums ,target);
    cout<<ans[0]<<","<<ans[1] <<endl;
    return 0;


}