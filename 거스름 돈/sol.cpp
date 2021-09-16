#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 1260;
    vector<int> coins = {500, 100, 50, 10};
    
    int ans = 0;
    for (int i = 0; i < coins.size(); ++i) {
        ans += n / coins[i];
        n %= coins[i];
    }

    cout << "count = " << ans << endl;
    
    return 0;
}