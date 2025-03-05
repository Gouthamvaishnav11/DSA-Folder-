// search in rotated sorted array

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& a, int tar) {
        int st =0 ,end = a.size()-1;

        while(st <= end){
            int mid = st + (end -st)/2;
            if(a[mid] == tar){
                return mid;
            }
            if(a[st]<=a[mid]){//left
                if(a[st] <=tar && tar<=a[mid]){
                    end =mid-1;
                }else{
                    st=mid+1;
                }
            }
            else{ //right
                if(a[mid] <=tar && tar <=a[end]){
                    st =mid +1;
                }else{
                    end = mid -1;
                }
            }

        }
        return -1;
        
    }
};


int main() {
    Solution sol;
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int result = sol.search(arr, target);

    cout << "Element found at index: " << result << endl;
    return 0;
}