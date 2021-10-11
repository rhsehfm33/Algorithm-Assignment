from collections import deque

def dfs(x, y):
    if board[x][y] == 1:
        return False

    board[x][y] = 1

    if x + 1 < N:
        dfs(x + 1, y)
    if x - 1 >= 0:
        dfs(x - 1, y)
    if y + 1 < M:
        dfs(x, y + 1)
    if y - 1 >= 0:
        dfs(x, y - 1)

    return True


N, M = map(int, input().split())
board = []
for i in range(N):
    board.append(list(map(int, input().split())))

ans = 0
for x in range(N):
    for y in range(M):
        if dfs(x, y) == True:
            ans += 1

print(ans)