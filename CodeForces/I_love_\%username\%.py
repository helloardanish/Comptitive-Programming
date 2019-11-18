#solution

n=int(input())
l=list(map(int,input().split(" ")))
total=0
for i in range(1,n):
	if l[i]>max(l[0:i]) or l[i]<min(l[0:i]):
		total=total+1
print(total)

#alternative

n,a=int(input()),[int(i) for i in input().split()]
print(sum(not min(a[:i]) <= a[i] <= max(a[:i]) for i in range(1,n)))
