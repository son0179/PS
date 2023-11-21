move = [ [2,1],[-2,1],[2,-1],[-2,-1], [1,2],[-1,2],[1,-2],[-1,-2]]

y, x = list(input())
x = int(x)

result = 0

for i in range(8):
    
    if( 1 <= x + move[i][1] and x + move[i][1] <= 8 and ord('a') < ord(y) + move[i][0] and ord(y) + move[i][0] <= ord('h') ):
        result+=1
        
print(result)

