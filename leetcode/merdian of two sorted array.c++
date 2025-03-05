// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

// The overall run time complexity should be O(log (m+n)).

 

// Example 1:

// Input: nums1 = [1,3], nums2 = [2]
// Output: 2.00000
// Explanation: merged array = [1,2,3] and median is 2.
// Example 2:

// Input: nums1 = [1,2], nums2 = [3,4]
// Output: 2.50000
// Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

// solution
#include<iostream>
#include<vector>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    if(nums1.size() > nums2.size()){
        swap(nums1 ,nums2);
    }

    int m=nums1.size(),n=nums2.size();

    // binary search on the smaller array
    int st=0,end=m;
    while(st <= end){
        int partition1 = (st + end) / 2;
        int partition2 = (m + n + 1)/2 - partition1;

        // nums1 handle maxleft and minright
        int maxleft1= ( partition1 ==  0) ? INT_MIN : nums1[partition1 - 1];
        int minright1 = ( partition1 == m ) ? INT_MAX : nums1[partition1];

        // nums2 handle maxleft and minright
        int maxleft2= ( partition2 ==  0) ? INT_MIN : nums2[partition2 - 1];
        int minright2 = ( partition2 == m ) ? INT_MAX : nums2[partition2];

        if((maxleft1 <= minright1) && (maxleft2 <= minright2)){
            // if the totoal ;length is odd
            if((m  + n) % 2 ==1){
                return max(maxleft1 , maxleft2);
            }
            // if the total lengthis even
            else{
            return (max(maxleft1,maxleft2) + min(minright1,minright2)) /2;
            }
            
        }
        else if (maxleft1 > minright2){
            // move the left in num1
            end=partition1 - 1;
        }
        else{
            // move to right in nums1
            st= partition1 +1;
        }

    }
}
    