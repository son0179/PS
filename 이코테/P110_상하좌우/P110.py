a = {}

a['U'] = (-1,0)
a['D'] = (1,0)
a['L'] = (0,-1)
a['R'] = (0,1)

n = int(input())

curX = 1
curY = 1
for plan in input().split():
    if 1<=curX+a[plan][1] and curX+a[plan][1]<=n and 1<=curY+a[plan][0] and curY+a[plan][0]<=n:
        curY += a[plan][0]
        curX += a[plan][1]

print(curY, curX) 