n = int(input())

time =[0,0,0]
result = 0
for i in range((n+1)*60*60):
    time[2] = i 
    for j in range(2,0,-1):
        time[j-1] = time[j]//60
        time[j] = time[j]%60
    if '3' in str(time):
        result += 1

print(result)