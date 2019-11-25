#solution

n,m=map(int,input().split())
t=list(map(int,input().split()))
list.sort(t)
s=0
for i in range(m):
    if t[i]<0:
        s+=abs(t[i])
    
print(s)



#alternative 1

m=int(input().split()[-1])
print(-sum(sorted(map(lambda x:min(int(x),0),input().split()))[:m]))
