#solution


s,n=map(int,input().split());
x=sorted(list(map(int,input().split())) for i in range(n))
for a,b in x:
    if s>a:s=s+b
    else:print('NO');exit()
print("YES")


#alternative 1


f=lambda:map(int,input().split())
s,n=f()
for a, b in sorted(list(f()) for i in ' '*n):
	s=(s+b)*(s>a)
print('YNEOS'[s<1::2])


#alternative 2

s,n=map(int,input().split())
x,y=zip(*sorted(tuple(map(int,input().split())) for i in range(n)))
print(['NO','YES'][all(s+sum(y[:i])>x[i] for i in range(n))])
