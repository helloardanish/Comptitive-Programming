#solution

n=int(input())
x,y=0,0
for i in range(n):
    a,b=map(int,input().split())
    x+=a
    y+=b
print(min(x,n-x) + min(y,n-y))


#alternative

n=int(input())
R=[]
L=[]
for i in range(n):
    x,y=input().split()
    R.append(x)
    L.append(y)
 
a=R.count("0")
b=L.count("0")
 
answer=min(a,n-a)+min(b,n-b)
 
print(answer)
