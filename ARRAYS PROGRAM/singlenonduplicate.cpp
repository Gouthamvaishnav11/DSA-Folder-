#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int n=a.size();
        if(n==1)return a[0];
        int st=0,end=n-1;
        while(st<=end){
            int mid=st + (end - st)/2;
            if(mid == 0 && a[0]!= a[1]) return a[mid];
            if(mid == n-1 && a[n-1]!= a[n-2]) return a[mid];
            if (a[mid - 1]!=a[mid] && a[mid] != a[mid+1]) return a[mid];

            // even
            if(mid % 2 ==0){
                if(a[mid -1] == a[mid]){ //left
                    end= mid-1;

                }else {
                    st = mid+1;
                }
            }else{
                if(a[mid-1] == a[mid]){ //right
                    st=mid+1;
                }else{//left
                    end = mid-1;
                }
            }
        }
        return -1;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 1, 2,2 ,6, 3, 3, 4, 4, 8, 8};  // Example input
    int result = solution.singleNonDuplicate(nums);

    if (result != -1) {
        cout << "The single non-duplicate element is: " << result << endl;
    } else {
        cout << "No single non-duplicate element found." << endl;
    }

    return 0;
}