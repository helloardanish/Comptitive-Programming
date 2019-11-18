#solution

m=k=0
for i in range(int(input())):
  a,b=map(int,input().split())
  k+=b-a
  m=max(m,k)
print(m)


#alternative

a=p=0
for x in[0]*int(input()):p-=eval(input().replace(' ','-'));a=max(a,p)
print(a)
