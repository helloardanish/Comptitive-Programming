#solution

a,b = (int(x) for x in input().split())
c = (a+1)//2
print([b*2-1,(b-c)*2][b>c])


#alternative 1

n,k=map(int,input().split());t=(n+1)//2;print(2*k-[1,2*t][k>t])


#alternative 2

a,b=map(int,input().split());c=b-(a+1)//2;print([b*2-1,c*2][c>0])
