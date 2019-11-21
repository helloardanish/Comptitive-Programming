#solution

n = int(input())
lis = [int(x) for x in input().split()]
m = int(input())
search = [int(x) for x in input().split()]
x = y = 0
a = [0]*(n+1)
for i in range(n):
    a[lis[i]] = i+1
for c in search :
    x+=a[c]
    y+= n-a[c]+1
 
print(x,y)



#alternative 1


I=lambda:map(int,input().split())
n=int(input())
d={}
x,y=0,0
for a,b in zip(range(1,n+1),I()):
  d[b]=a
I()
for s in I():
    x+=d[s]
    y+=n+1-d[s]
print(x,y)



#alternative 2

nofcheck = int(input())
nofElements = lambda:map(int,input().split())
 
index = {}
a = 0
b = 0
for x,y in zip(range(1,nofcheck+1),nofElements()):
    index[y] = x
nofElements()
for source in nofElements():
    a += index[source]
    b += (nofcheck + 1) - index[source]
print(a,b)
