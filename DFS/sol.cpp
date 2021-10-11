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

void dfs(int x) {
    visited[x] = true;
    cout << x << ' ';
    for (int node : graph[x]) {
        if (!visited[node]) {
            dfs(node);
        }
    }
}

int main() {
    dfs(1);

    return 0;
}