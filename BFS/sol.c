#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 200

int Queue[MAX];
int front = 0;
int rear = -1;
int qSize = 0;

int qPoll() {
    if (qSize > 0) {
        qSize -= 1;
        return Queue[front++ % MAX];
    }
}

void qPush(int x) {
    if (qSize < MAX) {
        qSize += 1;
        Queue[((++rear) % MAX)] = x;
    }
}

bool visited[9];
int graph[9][3] = {
    {},
    {2, 3, 8},
    {1, 7},
    {1, 4, 5},
    {3, 5},
    {3, 4},
    {7},
    {2, 6, 8},
    {1, 7}
};

void bfs(int start) {
    qPush(start);
    visited[start] = true;

    while (qSize > 0) {
        int curNode = qPoll();
        printf("%d ", curNode);

        int sz = (sizeof(graph[curNode]) / sizeof(graph[curNode][0]));
        for (int i = 0; i < sz && graph[curNode][i] != 0; ++i) {
            if (!visited[graph[curNode][i]]) {
                qPush(graph[curNode][i]);
                visited[graph[curNode][i]] = true;
            }
        }
    }
}

int main() {
    bfs(1);

    return 0;
}