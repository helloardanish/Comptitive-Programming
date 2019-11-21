#solution

n=int(input())
 
l=list(map(int,input().split()))
 
i=0
while n>l[i]:
     n-=l[i]
     i=(i+1)%7
print(i+1)


#alternative 1

n=int(input())
p=list(map(int,input().split()))
c=0
i=0
while c<n:
    c+=p[i]
    i=(i+1)%7
if i==0:
    i=7
print(i)




#alternative 2


from itertools import cycle
n = int(input())
l = [int(x) for x in input().split()]
for x, day in cycle(zip(l, range(7))):
	n -= x
	if n <= 0:
		print(day + 1)
		exit(0)
