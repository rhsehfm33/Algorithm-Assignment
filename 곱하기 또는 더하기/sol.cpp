#include <bits/stdc++.h>

using namespace std;

int main() {
    string S;
    cin >> S;

    int ans = 0;
    for (char digit : S) {
        int num = (digit - '0');
        if (ans <= 1 or num <= 1) {
            ans += num;
        }
        else {
            ans *= num;
        }
    }
    cout << ans << endl;

    return 0;
}