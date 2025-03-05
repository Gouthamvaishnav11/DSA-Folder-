#include <iostream>
#include <vector>
#include <string>
using namespace std;

void getmaze(vector<vector<int>>& mat, int r, int c, string path, vector<string>& ans) {
    int n = mat.size();

    // Boundary check and if the cell is blocked or already visited
    if (r < 0 || c < 0 || r >= n || c >= n || mat[r][c] == 0 || mat[r][c] == -1) {
        return;
    }

    // Reached the destination
    if (r == n - 1 && c == n - 1) {
        ans.push_back(path);
        return;
    }

    // Mark the current cell as visited
    mat[r][c] = -1;

    // Explore all directions
    getmaze(mat, r + 1, c, path + "D", ans); // Down
    getmaze(mat, r - 1, c, path + "U", ans); // Up
    getmaze(mat, r, c + 1, path + "R", ans); // Right
    getmaze(mat, r, c - 1, path + "L", ans); // Left

    // Backtrack: Unmark the current cell
    mat[r][c] = 1;
}

vector<string> findpath(vector<vector<int>>& mat) {
    int n = mat.size();

    vector<string> ans;
    string path = "";

    // If the starting or ending cell is blocked
    if (mat[0][0] == 0 || mat[n - 1][n - 1] == 0) {
        return ans;
    }

    // Start the recursive search from (0, 0)
    getmaze(mat, 0, 0, path, ans);

    return ans;
}

int main() {
    vector<vector<int>> mat = {{1, 0, 0, 0}, {1, 1, 0, 1},{1, 1, 0, 0}, {0, 1, 1, 1}};

    vector<string> ans = findpath(mat);
    for (string path : ans) {
        cout << path << endl;
    }

    return 0;
}


// the time complexity is the O(4 ^ n2)

// by using the the vis mat space complexity is n2 but we done by inplace  of the mat
