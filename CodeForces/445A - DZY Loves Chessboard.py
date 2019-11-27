#solution


n,m=map(int,input().split())
a=['W','B']
for i in range(n):
	s=list(input())
	for j in range(m):
		if s[j]=='.':
			s[j]=a[(i+j)%2]
	print(''.join(s))
  
  
  
#alternative 1

  
n,m=map(int,input().split())
l=[list(input()) for _ in range(n)]
for i in range(n):
    for j in range(m):
        if l[i][j]=='.':
            if (i+j)%2: l[i][j]='B'
            else: l[i][j]='W'
print('\n'.join(map(''.join,l)))
