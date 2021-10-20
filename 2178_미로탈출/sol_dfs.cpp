#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;
const int dx[4] = {-1, 0, 1, 0};
const int dy[4] = {0, 1, 0, -1};

void dfs(vector<vector<int>>& board, vector<vector<int>>& dis, int x, int y, int curDis) {
    if (x == board.size() - 1 and y == board[0].size() - 1) {
        return;
    }

    board[x][y] = 0;
    for (int d = 0; d < 4; ++d) {
        int nx = x + dx[d];
        int ny = y + dy[d];
        if (nx >= 0 and nx < board.size() and ny >= 0 and ny < board[0].size()) {
            if (board[nx][ny] == 1 and curDis + 1 < dis[nx][ny]) {
                dis[nx][ny] = curDis + 1;
                dfs(board, dis, nx, ny, curDis + 1);
            }
        }
    }
    board[x][y] = 1;
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    vector<vector<int>> board(N, vector<int>(M));
    vector<vector<int>> dis(N, vector<int>(M, INF));
    for (int x = 0; x < N; ++x) {
        for (int y = 0; y < M; ++y) {
            scanf("%1d", &board[x][y]);
        }
    }

    dis[0][0] = 1;
    dfs(board, dis, 0, 0, 1);
    printf("%d\n", dis[N - 1][M - 1]);

    return 0;
}