#include <bits/stdc++.h>

using namespace std;

int findElement(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        bool success = true;
        for (int l = i - 1, r = i + 1; l >= 0 or r < n; --l, ++r) {
            if ((l >= 0 and arr[l] >= arr[i]) or
                (r < n and arr[r] <= arr[i])) {
                success = false;
                break;
            }
        }
        if (success) {
            return i;
        }
    }

    return -1;
}

int main() {
    int arr[] = {5, 1, 4, 3, 6, 8, 10, 7, 9}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int idx = findElement(arr, n); 
    cout << idx << endl;

    return 0;
}