#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> coins(N);
    for (int i = 0; i < N; ++i) {
        cin >> coins[i];
    }

    int ans = 0;
    for (int i = N - 1; i >= 0; --i) {
        ans += K / coins[i];
        K %= coins[i];
    }

    cout << ans << endl;

    return 0;
}