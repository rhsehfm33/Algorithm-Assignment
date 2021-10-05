#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    int x = 1, y = 1;
    unordered_map<char, int> dx;
    unordered_map<char, int> dy;
    dx['U'] = -1;
    dx['D'] = 1;
    dy['L'] = -1;
    dy['R'] = 1;
    
    cin >> N;
    while (true) {
        char d;
        cin >> d;
        if (cin.eof()) {
            break;
        }
        if (x + dx[d] >= 1 and x + dx[d] <= N and
            y + dy[d] >= 1 and y + dy[d] <= N) {
            x += dx[d];
            y += dy[d];
        }
    }

    cout << x << " " << y << endl;

    return 0;
}