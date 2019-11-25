#solution

k = int(input())
ki = sorted(map(int, input().split()),reverse = True)
count = 0
i=0
while(k>0):
    k=k-ki[i]
    if k<=0 and i==11:
        count=12
        break
    i+=1
    if(i>=12):
        count = -1
        break
    count+=1
print(count)



#alternative 1

k=int(input())
m=sorted(map(int,input().split()))[::-1]
for i in range(13):
 if sum(m[:i])>=k:
  print(i)
  exit(0)
print(-1)


#alternative 2

k = int(input())
a = sorted(map(int, input().split()),reverse=True)
if sum(a) < k: print(-1)
else: print(min(i for i in range(13) if sum(a[:i]) >= k))


#alternative 3

K = int(input())
A = list(map(int,input().split()))
A.sort()
ans = 0
while K > 0 and A:
    K -= A.pop()
    ans += 1
if K <= 0:
    print(ans)
else:
    print(-1)
