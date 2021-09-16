#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int ans = 0;
    while (N) {
        ans += (N % K) + (N >= K);
        N /= K;
    }
    cout << (ans - 1) << endl;

    return 0;
}