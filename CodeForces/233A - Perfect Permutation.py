#solution

n=int(input())
if n%2:print(-1)
else:print(*list(range(n,0,-1)))


#alternative 1

a=int(input())
if a%2:print(-1)
else:
    for i in range(0,a,2):print(i+2,i+1,end=' ')


#alternative 2

n=int(input())
if n%2: print(-1)
else: print(' '.join(list(map(str,list(range(1,n+1))))[::-1]))
