from collections import deque
import sys; sys.setrecursionlimit(100000)

def dfs(x, y, curDis, ans):
    if x == N - 1 and y == M - 1:
        ans[0] = min(ans[0], curDis)
        return
    
    board[x][y] = 0

    for d in range(4):
        nx = x + dx[d]
        ny = y + dy[d]
        if nx >= 0 and nx < N and ny >= 0 and ny < M:
            if board[nx][ny] == 1 and curDis + 1 < dis[nx][ny]:
                dis[nx][ny] = curDis + 1
                dfs(nx, ny, curDis + 1, ans)

    board[x][y] = 1
                
INF = 1e9
dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

N, M = map(int, input().split())
board = []
for i in range(N):
    board.append(list(map(int, input())))

dis = [[INF] * M for _ in range(N)]
ans = [INF]
dfs(0, 0, 1, ans)

print(ans[0])