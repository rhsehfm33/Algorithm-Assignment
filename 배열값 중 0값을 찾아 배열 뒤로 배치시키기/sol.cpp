#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> nums = {6, 0, 8, 2, 3, 0, 4, 0, 1};
    
    for (int left = 0, right = 0; right < nums.size(); ++right) {
        if (nums[right]) {
            swap(nums[left++], nums[right]);
        }
    }

    for (int num : nums) {
        cout << num << " ";
    }
    
    return 0;
}