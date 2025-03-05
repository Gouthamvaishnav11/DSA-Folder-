// maximum subarray sum by using kadane's  algorithm the time complexity is O(n)

#include<iostream>
#include<vector>

using namespace std;

int maxsubarray(vector<int>&nums){
    int currsum =  0,maxsum =INT_MIN;

    for(int val : nums){
        currsum += val;
        maxsum = max(currsum,maxsum);

        if(currsum <0 ){
            currsum =0;
        }
    }

   return  maxsum;
        
}