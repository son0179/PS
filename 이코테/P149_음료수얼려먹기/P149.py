

def func (y, x):
    graph[y][x] = 0
    for i in range(4):
        if graph[y + movey[i]][x+ movex[i]]:
            func(y + movey[i], x + movex[i])
            


n, m = map(int, input().split())
graph = []
movey = [0,1,0,-1]
movex = [1,0,-1,0]


graph.append( [0] * (m+2) )

for i in range(n):
    graph.append( [0] + list(map(lambda x : 1 - int(x)  , list(input())) ) + [0] )

graph.append( [0] * (m+2) )

result = 0
for i in range(1,n+2):
    for j in range(1, m+2):
        if graph[i][j]:
            result += 1
            func(i , j)
            
print(result)