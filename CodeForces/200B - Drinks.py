#solution

n = int(input())
ls = map(int, input().split())
ans = ((sum(ls)/100)/n)*100
print(ans)

#alternative 1

print(1/int(input())*sum(map(int,input().split())))

#alternative 2

n=int(input())
print(sum(map(int,input().split()))/n)
