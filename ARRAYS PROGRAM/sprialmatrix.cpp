// matrix input is = [1 2 3 4],[5 6 7 8],[9 10 11 12 ],[13 ,14 ,15 ,16]

#include<iostream>
#include<vector>

using namespace std;

class solution{
    public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        int strow=0,stcol=0,endrow=m-1,endcol=n-1;
        vector<int>ans;

        // binary search for spiral
        while(strow <= endrow && stcol <= endcol){
            // top
            for(int i=stcol ; i<=endcol ;i++){
                ans.push_back(mat[strow][i]);
            }
            // right
            for(int j=strow +1 ;j<=endrow;j++){
                ans.push_back(mat[j][endcol]);
            
            }
            // bottom
            for(int i = endcol-1 ;i>=stcol; i--){
                if(strow == endrow){
                    break;
                }
                ans.push_back(mat[endrow][i]);
            }
            // left
            for(int j=endrow -1 ;j>=strow+1; j--){
                if(stcol ==  endcol){
                    break;
                }
                ans.push_back(mat[j][stcol]);

            }
            strow++;endrow--;stcol++;endcol--;
            
        }
        return ans;

    } 

};

int main() {
    vector<vector<int>> mat = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12}, {13, 14, 15, 16}};

    solution sol;  // Create an instance of the solution class
    vector<int> result = sol.spiralOrder(mat);  // Call the method

    cout << "Spiral order of the matrix is: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
