#solution

n=int(input())
A=[int(x) for x in input().split()]
m=int(input())
B=[int(x) for x in input().split()]
C=[]
for i in A:
    for j in B:
        if j%i==0:
            C.append(j//i)
print(C.count(max(C)))



#alternative 1

i=lambda:list(map(int,input().split()))
i()
a=i()
i()
b=i()
l=[x//y for x in b for y in a if x%y==0]
print(l.count(max(l)))
