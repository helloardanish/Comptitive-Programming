#solution 

k,l,m,n,d=[int(input())for _ in range(5)];print(sum((i%k==0 or i%l==0 or i%m==0 or i%n==0)for i in range(1,d+1)))

#alternative 1

n = [int(input()) for _ in range(4)]
print(sum(any([not t % y for y in n]) for t in range(1, int(input()) + 1)))

#alternative 2

*k,d=[int(input())for i in' '*5];print(d-sum(all(i%x for x in k)for i in range(1,d+1)))
