n, k = map(int,input().split())

total = 0
while n>1:
    total += n%k + 1
    n//=k

print(total)