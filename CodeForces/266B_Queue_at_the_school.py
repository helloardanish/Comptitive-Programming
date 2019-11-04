#alternative

t=int(input()[2:])
s=input()
while t:s=s.replace('BG','GB');t-=1
print(s)

#solution

n, t = map(int,input().split())
s = input()
for i in range(t):
    s=s.replace('BG','GB')
print(s)
