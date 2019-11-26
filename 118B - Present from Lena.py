#solution


n=int(input())
s='0123456789'
for i in s[:n]+s[n::-1]:
	a=int(i)
	print(' '.join(' '*(n-a)+s[:a]+s[a::-1]))



#alternative 1


n=int(input())
for i in range(-n,n+1):
	print(2*abs(i)*' ',end='')
	for j in range(-(n-abs(i)),(n-abs(i))+1):
		if j!=(n-abs(i)):
			print(n-abs(i)-abs(j),end=' ')
		else:
			print('0')
