N = int(input())
directions = input().split()
dx = {'U' : -1, 'D' : 1}
dy = {'L' : -1, 'R' : 1}

x = 1
y = 1
for direction in directions:
    nx = x + dx.get(direction, 0)
    ny = y + dy.get(direction, 0)
    if nx >= 1 and nx <= N and ny >= 1 and ny <= N:
        x = nx
        y = ny
        
print(x, y)