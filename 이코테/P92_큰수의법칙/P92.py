N, M, K = map(int, input().split())

big1 = 0
big2 = 0

for i in list(map(int, input().split())):
    
    if big1 < i:
        big2 = big1
        big1 = i
        
    elif big2 < i:
        big2 = i

times = M//(K+1)
remain = M%(K+1)

print(big1 * remain + (big1 * K + big2)* times)