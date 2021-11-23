#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> arr = {10, 68, 75, 7, 21, 12};
    sort(arr.begin(), arr.end(), [](const auto& l, const auto& r) {
        return (to_string(l) + "A" > to_string(r) + "A");
    });
    for (int num : arr) {
        cout << num;
    }

    return 0;
}