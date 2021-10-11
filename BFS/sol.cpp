#include <bits/stdc++.h>

using namespace std;

bool visited[9];
vector<vector<int>> graph = {
    {},
    {2, 3, 8},
    {1, 7},
    {1, 4, 5},
    {3, 5},
    {3, 4},
    {7},
    {2, 6, 8},
    {1, 7},
};

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (q.size()) {
        int curNode = q.front(); q.pop();
        cout << curNode << " ";
        for (int nextNode : graph[curNode]) {
            if (visited[nextNode] == false) {
                q.push(nextNode);
                visited[nextNode] = true;
            }
        }
    }
}

int main() {
    bfs(1);

    return 0;
}