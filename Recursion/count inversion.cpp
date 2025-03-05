#include <iostream>
#include <vector>
using namespace std;

// Function to merge two halves of the array and count inversions
int mergeCount(vector<int>& arr, int st, int end, int mid) {
    vector<int> temp;
    int i = st, j = mid + 1;
    int invCount = 0;

    // Merge process with inversion count
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
            invCount += (mid - i + 1); // Count inversions
        }
    }

    // Copy remaining elements from the left half
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    // Copy remaining elements from the right half
    while (j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy merged elements back to the original array
    for (int idx = 0; idx < static_cast<int>(temp.size()); idx++) {
        arr[st + idx] = temp[idx];
    }

    return invCount;
}

// Recursive merge sort function
int mergeSort(vector<int>& arr, int st, int end) {
    if (st < end) {
        int mid = st + (end - st) / 2;

        // Count inversions in left and right halves
        int leftInvCount = mergeSort(arr, st, mid);
        int rightInvCount = mergeSort(arr, mid + 1, end);

        // Count split inversions during merging
        int splitInvCount = mergeCount(arr, st, end, mid);

        return leftInvCount + rightInvCount + splitInvCount;
    }
    return 0;
}

// Main function
int main() {
    vector<int> arr = {6,3,5,2,7};

    int ans = mergeSort(arr, 0, arr.size() - 1);
    cout << "Inversion count is: " << ans << endl;

    return 0;
}
