#solution


n,m=map(int,input().split())
l=sorted(list(map(int,input().split())))
print(min([l[i+n-1]-l[i] for i in range(m-n+1)]))



#alternative 1


I=lambda:map(int,input().split());n,m=I();a=sorted(I());print(min(j-i for i,j in zip(a,a[n-1:])))
