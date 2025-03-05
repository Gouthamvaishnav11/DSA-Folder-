// peak index in mountain array:
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int st =1, end=a.size()-2;
        while(st<=end){
            int mid = st + (end - st) / 2;
            if(a[mid-1] < a[mid] && a[mid] > a[mid + 1]){
                return mid;
            }else if(a[mid- 1] < a[mid]){
                st = mid + 1;
            }else{
                end = mid -1;
            }
        }

        return -1;
    }
};
int main(){
    
    Solution solution;
    vector<int> mountainArray = {0,3,8,9,10,4,3,-1};  // Example mountain array
    int peakIndex = solution.peakIndexInMountainArray(mountainArray);

    if (peakIndex != -1) {
        cout << "The peak index is: " << peakIndex << endl;
    } else {
        cout << "No peak found in the array." << endl;
    }

    return 0;
}
