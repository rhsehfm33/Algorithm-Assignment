from collections import deque

def bfs(x, y):
    queue = deque()
    queue.append((x, y))

    while queue:
        x, y = queue.popleft()
        if x == N - 1 and y == M - 1:
            break

        for d in range(4):
            nx = x + dx[d]
            ny = y + dy[d]

            if nx >= 0 and nx < N and ny >= 0 and ny < M:
                if board[nx][ny] == 1:
                    board[nx][ny] = board[x][y] + 1
                    queue.append((nx, ny))

    return board[N - 1][M - 1]

dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

N, M = map(int, input().split())
board = []
for i in range(N):
    board.append(list(map(int, input())))

print(bfs(0, 0))