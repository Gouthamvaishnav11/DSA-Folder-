// given aa non-empty array of integer nums,every element appears twice excepts for one find the single one.
// you must implement a  solution with a linear runtime complexity and use only constant extra space.

// exmaple : input:nums=[2,2,1]
// output:1

 
#include<iostream>
#include<vector>
using namespace  std;
class solution{
    public:
    int singlenumber(vector<int>& nums){// & used is used to name alics alics means giving name
      int ans =0;

      for(int val :nums){
        ans=ans ^ val;

      }
      return ans;
    } 

};

