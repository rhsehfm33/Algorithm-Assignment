#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int INF = 2e9;
const int dx[4] = {-1, 0, 1, 0};
const int dy[4] = {0, 1, 0, -1};

int board[100][100];
int dis[100][100];
int N, M;
int ans;

void dfs(int x, int y, int curDis) {
    if (x == N - 1 && y == M - 1 && curDis < ans) {
        ans = curDis;
        return;
    }

    board[x][y] = 0;
    for (int d = 0; d < 4; ++d) {
        int nx = x + dx[d];
        int ny = y + dy[d];
        if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
            if (board[nx][ny] == 1 && curDis + 1 < dis[nx][ny]) {
                dis[nx][ny] = curDis + 1;
                dfs(nx, ny, curDis + 1);
            }
        }
    }
    board[x][y] = 1;
}

void init() {
    scanf("%d %d", &N, &M);
    for (int x = 0; x < N; ++x) {
        for (int y = 0; y < M; ++y) {
            scanf("%1d", &board[x][y]);
        }
    }
    
    for (int x = 0; x < N; ++x) {
        for (int y = 0; y < M; ++y) {
            dis[x][y] = INF;
        }
    }
    ans = 2e9;
}

int main() {
    init();
    
    dfs(0, 0, 1);

    printf("%d\n", ans);

    return 0;
}
