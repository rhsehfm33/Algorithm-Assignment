#include <bits/stdc++.h>

using namespace std;

int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};

int main() {
    string pos;
    cin >> pos;
    int x = pos[0] - 'a' + 1;
    int y = pos[1] - '0';

    int ans = 0;
    for (int d = 0; d < 8; ++d) {
        int x2 = x + dx[d];
        int y2 = y + dy[d];
        if (x2 >= 1 and x2 <= 8 and y2 >= 1 and y2 <= 8) {
            ans += 1;
        }
    }
    
    cout << ans << endl;

    return 0;
}