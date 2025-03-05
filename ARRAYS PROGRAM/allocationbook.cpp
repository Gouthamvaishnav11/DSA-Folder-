// book allocation problem


#include <iostream>
#include <vector>

using namespace std;

bool isvalid(vector<int> &arr, int n, int m, int maxallowedpages)
{
    int students = 1, pages = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxallowedpages) {
            return false;
        }
        if (pages + arr[i] <= maxallowedpages) {
            pages += arr[i];
        } else {
            students++;
            pages = arr[i];
        }
    }
    return students <= m ;
}

int allocatebooks(vector<int> &arr, int n, int m)
{
    if (m > n) {
        return -1;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int st = 0, end = sum; // range of possible answers
    int result = -1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (isvalid(arr, n, m, mid)) { // left
            result = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }

    return result;
}

int main() {
    vector<int> arr = {3  , 6 , 4 , 8,};
    int n = arr.size(); // Number of books
    int m = 3;          // Number of students

    cout << allocatebooks(arr, n, m) << endl;

    return 0;
}
