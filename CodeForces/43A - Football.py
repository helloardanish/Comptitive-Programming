#solution

n=int(input())
print(sorted([input()for i in range(n)])[int(n/2)])


#alternative 1

n = int(input())
i = 1
team = []
while i <= n:
    team.append(input())
    i += 1
print(max(set(team),key = team.count))


#alternative 2

a=[input()for _ in range(int(input()))]
try:
 i,j=set(a)
 print(i if a.count(i)>a.count(j)else j)
except:
 print(a[0])
