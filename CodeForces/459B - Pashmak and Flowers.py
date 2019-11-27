#solution


n=int(input())
a=list(map(int,input().split()))
i,j=min(a),max(a)
print(j-i,[(n*(n-1))//2,a.count(i)*a.count(j)][i!=j])



#alternative 1


n=int(input());a=list(map(int,input().split()));print(max(a)-min(a),[n*(n-1)//2,a.count(max(a))*a.count(min(a))][max(a)!=min(a)]
