dx = [-2, -2, -1, -1, 1, 1, 2, 2]
dy = [-1, 1, -2, 2, -2, 2, -1, 1]

x, y = input()
x = int(ord(x)) - int(ord('a')) + 1
y = int(y)

ans = 0
for d in range(8):
    if x + dx[d] >= 1 and x + dx[d] <= 8 and y + dy[d] >= 1 and y + dy[d] <= 8:
        ans += 1

print(ans)