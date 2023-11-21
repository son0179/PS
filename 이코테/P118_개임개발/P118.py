n, m = map(int, input().split())

moved   = [[0] * (m+2) for _ in range(n+2)]

movex = [-1,0,1,0]
movey = [0,1,0,-1]

y, x, direction = map(int, input().split())

field = [ ]
field.append([0]*(m+2))
for i in range (n):
    field.append( [0] + list( map( lambda x: 1-int(x),input().split() ) ) +[0] )
field.append([0]*(m+2))

print(field)

result = 1
count = 0
y += 1
x += 1
moved[y][x] = 1
while count < 4:
    
    direction = ( direction + 3 ) % 4
    if field[y + movey[direction]][x + movex[direction]] == 1 and moved[y + movey[direction]][x + movex[direction]] == 0:
        y +=  movey[direction]
        x +=  movex[direction]
        moved[y][x] = 1
        result+=1
        count = 0
    else:
        count+=1
    if(count == 4 and field[y - movey[direction]][x - movex[direction]] == 1):
        y -= movey[direction]
        x -= movex[direction]
        direction = (direction+1)%4;
        count = 0

print(result)
    