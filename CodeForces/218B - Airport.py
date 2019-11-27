#solution


import queue
 
(n, m) = (int(x) for x in input().split())
empty = (int(x) for x in input().split())
 
maxQ = queue.PriorityQueue()
maxPrice = 0
minQ = queue.PriorityQueue()
minPrice = 0
for x in empty:
    maxQ.put(-x)
    minQ.put(x)
 
for x in range(n):
    p = minQ.get()
    q = maxQ.get()
    minPrice += p
    maxPrice -= q
 
    if p > 1:
        minQ.put(p - 1)
    if q < -1:
        maxQ.put(q + 1)
 
print("{} {}".format(maxPrice, minPrice))



#alternative 1


n,m=list(map(int,input().split()))
arr=list(map(int,input().split()))
arr2=arr.copy()
mx=0
mn=0
for x in range(n):
    a1=arr.index(max(arr))
    # a2=arr.index(min(a1))
    mx=mx+arr[a1]
    # mn=mn+arr[a2]
    arr[a1]=arr[a1]-1
 
 
for x in range(n):
    a1=arr2.index(min(arr2))
    mn=mn+arr2[a1]
    arr2[a1]=arr2[a1]-1
    if(arr2[a1]==0):
        arr2[a1]=10000
 
print(mx,mn)
