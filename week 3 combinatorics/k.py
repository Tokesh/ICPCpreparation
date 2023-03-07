import math
a = int(input())
arr = list(map(int,input().split()))
cnt = 0
more = 0
for i in range(a):
    more = 0
    for j in range(i+1, a):
        if(arr[i] > arr[j]): more += 1
    cnt += more * math.factorial(a-i-1)
print(cnt)