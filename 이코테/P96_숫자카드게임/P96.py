n,m = map(int, input().split())

result = 0
for i in range(n):
    candidate = 10001
    for j in list(map(int, input().split())):
        if j < candidate:
            candidate = j
    if(result < candidate):
        result = candidate

print(result)
