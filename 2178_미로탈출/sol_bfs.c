#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 50000

typedef struct _pos {
    int x;
    int y;
} Pos;

Pos initPos(int x, int y) {
    Pos pos;
    pos.x = x;
    pos.y = y;

    return pos;
}

Pos Queue[MAX];
int front = 0;
int rear = -1;
int size = 0;

bool qFull() {
    return size > MAX;
}

bool qEmpty() {
    return size == 0;
}

int qSize() {
    return size;
}

Pos qPoll() {
    if (!qEmpty()) {
        size -= 1;
        return Queue[front++ % MAX];
    }
}

void qPush(Pos x) {
    if (!qFull()) {
        size += 1;
        Queue[((++rear) % MAX)] = x;
    }
}



const int dx[4] = {-1, 0, 1, 0};
const int dy[4] = {0, 1, 0, -1};

int board[100][100];
int N, M;
int ans;

void init() {
    scanf("%d %d", &N, &M);
    for (int x = 0; x < N; ++x) {
        for (int y = 0; y < M; ++y) {
            scanf("%1d", &board[x][y]);
        }
    }
    ans = 2e9;
}

int bfs() {
    Pos pos;
    pos.x = 0;
    pos.y = 0;
    qPush(pos);

    int count = 0;
    while (qSize()) {
        count += 1;
        int sz = qSize();
        for (int i = 0; i < sz; ++i) {
            Pos pos = qPoll();
            if (pos.x == N - 1 && pos.y == M - 1) {
                return count;
            }

            for (int d = 0; d < 4; ++d) {
                int nx = pos.x + dx[d];
                int ny = pos.y + dy[d];
                if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
                    if (board[nx][ny] == 1) {
                        board[nx][ny] = 0;
                        qPush(initPos(nx, ny));
                    }
                }
            }
        }
    }

    return -1;
}

int main() {
    init();
    
    printf("%d\n", bfs());

    return 0;
}
