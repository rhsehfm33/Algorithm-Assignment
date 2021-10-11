#include <bits/stdc++.h>

using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void init(int& N, int& M, vector<vector<int>>& board) {
    cin >> N >> M;
    board.resize(N, vector<int>(M));
    for (int x = 0; x < N; ++x) {
        for (int y = 0; y < M; ++y) {
            cin >> board[x][y];
        }
    }
}

void bfs(const int N, const int M, vector<vector<int>>& board, int startX, int startY) {
    queue<pair<int, int>> q;
    q.push({startX, startY});
    while (q.size()) {
        auto [curX, curY] = q.front(); q.pop();
        for (int d = 0; d < 4; ++d) {
            int nextX = curX + dx[d];
            int nextY = curY + dy[d];
            if (nextX >= 0 and nextX < N and nextY >= 0 and nextY < M and board[nextX][nextY] == 0) {
                board[nextX][nextY] = 1;
                q.push({nextX, nextY});
            }
        }
    }
}

int solve(int N, int M, vector<vector<int>>& board) {
    int ans = 0;

    for (int x = 0; x < N; ++x) {
        for (int y = 0; y < M; ++y) {
            if (board[x][y] == 0) {
                bfs(N, M, board, x, y);
                ans += 1;
            }
        }
    }
    
    return ans;
}

int main() {
    int N, M;
    vector<vector<int>> board;
    init(N, M, board);

    cout << solve(N, M, board) << endl;
    
    return 0;
}