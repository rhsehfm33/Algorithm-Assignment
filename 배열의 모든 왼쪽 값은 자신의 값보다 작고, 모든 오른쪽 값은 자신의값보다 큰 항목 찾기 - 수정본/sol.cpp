#include <bits/stdc++.h>

using namespace std;


void findElements(int arr[], int n) {
    vector<int> rightMins(n);
    rightMins[n - 1] = arr[n - 1];
    for (int i = n - 2; i > 0; --i) {
        rightMins[i] = min(arr[i], rightMins[i + 1]);
    }

    bool success = false;
    for (int i = 0, leftMax = INT_MIN; i < n; ++i) {
        if ((i == 0 or arr[i] > leftMax) and 
            (i == n - 1 or arr[i] < rightMins[i + 1])) {
            cout << i << " ";
            success = true;
        }
        leftMax = max(leftMax, arr[i]);
    }

    if (success == false) {
        cout << -1 << endl;
    }
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(arr[0]); 
    findElements(arr, n); 

    return 0;
}