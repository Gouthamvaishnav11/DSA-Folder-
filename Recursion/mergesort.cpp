#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int st, int mid, int end) { // O(n)
    vector<int> temp;
    int i = st, j = mid + 1;

    // Merging two sorted halves
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    for (int idx = 0; idx < static_cast<int>(temp.size()); idx++) {

        arr[idx + st] = temp[idx];
    }
}

void mergesort(vector<int>& arr, int st, int end) {
    if (st < end) {
        int mid = st + (end - st) / 2;

        mergesort(arr, st, mid);    // Left half
        mergesort(arr, mid + 1, end); // Right half

        merge(arr, st, mid, end);  // Merge the two halves
    }
}

int main() {
    vector<int> arr = {12, 8, 13, 31, 35, 32, 17, 10, 55, 5};

    mergesort(arr, 0, arr.size() - 1);

    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
