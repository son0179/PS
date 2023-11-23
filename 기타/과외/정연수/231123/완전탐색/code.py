
field = []

shortest = 987654321
shortroute = []

movey = [0 , 1 , 0 ,-1]
movex = [1, 0 ,-1 ,0]

startx = 0
starty = 0

goalx = 0
goaly = 0

# 254 * 254 처리 위해 256 * 256 맵 구조 생성
field.append( ['#']*256 )
for i in range(254):
    
    temp = list(input())
    
    # 입력 중 시작, 끝 점 입력 된다면 기억 
    if 'S' in temp:
        starty = i
        startx = temp.index()
    if 'G' in temp:
        goaly = i
        goalx = temp.index()
        
    field.append( ['#'] + temp + ['#'])
field.append( ['#']*256 )


#완전탐색
def func(y, x , direction ,count ,route ):
    
    for i in range(4):
        if i == direction:
            continue
        if field[ y + movey[i]][x + movex[i]] == ' ':
            print(count)
            if shortest < count:
                shortest = count
                shortroute = route
        if field[ y + movey[i]][x + movex[i]] == ' ':
            func( y + movey[i] , x + movex[i], direction, count + 1 , route.append( (y + movey[i]), (x + movex[i]) ) )
            

func(starty, startx, 0 , [(starty),(startx)] )

for y, x in shortroute:
    field[y][x] = '*'

for i in field[1:256]:
    print( i[1:256])