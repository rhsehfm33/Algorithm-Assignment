#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> P(N);
    for (int i = 0; i < N; ++i) {
        cin >> P[i];
    }

    int ans = 0;
    sort(P.begin(), P.end());
    for (int i = 0; i < N; ++i) {
        ans += P[i] * (N - i);
    }
    cout << ans << endl;
    
    return 0;
}