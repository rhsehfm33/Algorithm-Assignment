#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 5;
    vector<int> bitMap1 = {9, 20, 28, 18, 11};
    vector<int> bitMap2 = {30, 1, 21, 17, 28};

    vector<int> resultBitMap(n);
    for (int i = 0; i < n; ++i) {
        resultBitMap[i] = bitMap1[i] | bitMap2[i];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = n - 1; j >= 0; --j) {
            if ((resultBitMap[i] >> j) & 1) {
                cout << "#";
            }
            else {
                cout << " ";
            }
        }
        cout << '\n';
    }
    
    return 0;
}