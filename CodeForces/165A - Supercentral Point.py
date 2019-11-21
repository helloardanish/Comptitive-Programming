#solution

n=int(input())
x=[list(map(int,input().split()))for i in range(n)]
a=0
for i in range(n):
 l,r,u,d=[0]*4
 for j in range(n):
  if i==j:continue
  if x[i][0]==x[j][0]:
   if x[i][1]<x[j][1]:u=1
   else:d=1
  if x[i][1]==x[j][1]:
   if x[i][0]<x[j][0]:l=1
   else:r=1
 a+=l+r+u+d==4
print(a)


#alternative 1

n=int(input())
P=[]
for i in range(n):
    x,y=map(int,input().split())
    P.append((x,y))
ans=0
for i in range(n):
    a=False
    b=False
    c=False
    d=False
    for j in range(n):
        if(i==j):
            continue
        if(P[j][0]>P[i][0] and P[j][1]==P[i][1]):
            a=True
        if(P[j][0]<P[i][0] and P[j][1]==P[i][1]):
            b=True
        if(P[j][0]==P[i][0] and P[j][1]>P[i][1]):
            c=True
        if(P[j][0]==P[i][0] and P[j][1]<P[i][1]):
            d=True
    if(a and b and c and d):
        ans+=1
print(ans)
