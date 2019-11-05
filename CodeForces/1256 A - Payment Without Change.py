#alternative

for _ in[0]*int(input()):a,b,n,s=map(int,input().split());print('YNEOS'[min(s//n,a)*n+b<s::2])

#solution


q=int(input())
for i in range(q):
    a,b,n,s=(int(j) for j in input().split())
    x = s-min(a,s//n)*n
    if x<=b:
        print('YES')
    else:
        print('NO')
        
#try printing like this

print("YES" if s-min(a,s//n)*n<=b else "NO") #on line 11
