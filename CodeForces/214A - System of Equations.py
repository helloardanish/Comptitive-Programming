#solution

n,m=map(int,input().split())
cnt=0;
for i in range(32):
    for j in range(32):
        if(i*i+j==n and i+j*j==m):
            cnt+=1
print(cnt)



#alternative 1


n,m = map(int, input().split())
l = set()
for a in range(32):
    for b in range(32):
        if a*a+b-n==a+b*b-m==0:
            l.add((a,b))
#print(l)
print(len(l))



#alternative 2

n, m = map(int, input().split())
l = sum(a*a+b-n==a+b*b-m==0 for a in range(33) for b in range(33))
print(l)
