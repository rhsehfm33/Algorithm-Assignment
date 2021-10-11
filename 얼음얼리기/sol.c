#include <stdio.h>
#include <stdbool.h>

int N, M;
int board[1000][1000];

bool dfs(int x, int y) {
    if (board[x][y] == 1) {
        return false;
    }

    board[x][y] = 1;

    if (x + 1 < N) {
        dfs(x + 1, y);
    }
    if (x - 1 >= 0) {
        dfs(x - 1, y);
    }
    if (y + 1 < M) {
        dfs(x, y + 1);
    }
    if (y - 1 >= 0) {
        dfs(x, y - 1);
    }

    return true;
}

int main() {
    scanf("%d %d", &N, &M);
    for (int x = 0; x < N; ++x) {
        for (int y = 0; y < M; ++y) {
            scanf("%d", &board[x][y]);
        }
    }

    int ans = 0;
    for (int x = 0; x < N; ++x) {
        for (int y = 0; y < M; ++y) {
            if (dfs(x, y) == true) {
                ans += 1;
            }
        }
    }
    
    printf("%d\n", ans);

    return 0;

}