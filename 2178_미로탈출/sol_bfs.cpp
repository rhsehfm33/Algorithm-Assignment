#include <bits/stdc++.h>

using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    vector<vector<int>> board(N, vector<int>(M));
    for (int x = 0; x < N; ++x) {
        for (int y = 0; y < M; ++y) {
            scanf("%1d", &board[x][y]);
        }
    }

    int ans = 0;
    queue<pair<int, int>> q;
    q.push({0, 0});
    board[0][0] = 0;
    while (q.size()) {
        ans += 1;
        int sz = q.size();
        while (sz--) {
            auto [x, y] = q.front(); q.pop();
            if (x == N - 1 and y == M - 1) {
                printf("%d\n", ans);
                return 0;
            }
            for (int d = 0; d < 4; ++d) {
                int nx = x + dx[d];
                int ny = y + dy[d];
                if (nx >= 0 and nx < N and ny >= 0 and ny < M) {
                    if (board[nx][ny] == 1) {
                        q.push({nx, ny});
                        board[nx][ny] = 0;
                    }
                }
            }
        }
    }

    return 0;
}