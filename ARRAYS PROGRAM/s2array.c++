#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
   bool searchinrow(vector<vector<int>>&mat,int target,int row){
      int n=mat[0].size();
      int st=0,end=n-1;
       while(st <= end){
          int mid=st+ (end-st)/2;
          if(target == mat[row][mid]){
              return true;
            }else if(target > mat[row][mid]){
               st =mid+1;
            }else{
               end=mid-1;
            }
        }
        return false;
    }


    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size(),n=mat[0].size();
        int strow =0 ,endrow=m-1;
        while(strow <=endrow){
            int midrow=strow + (endrow - strow)/2;
            if(target >=mat[midrow][0] && target <=mat[midrow][n-1]){
                return searchinrow(mat,target,midrow);
            }
            else if(target >= mat[midrow][n-1]){
                strow=midrow +1;

            }else{
                endrow=midrow-1;
            }

        }   
        return false;
        
    }
};
int main(){

    vector<vector<int>>mat={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int  target = 30;
    Solution solution;
    if (solution.searchMatrix(mat, target)) {
        cout << "Target " << target << " found in the matrix." << endl;
    } else {
        cout << "Target " << target << " not found in the matrix." << endl;
    }

    return 0;

}