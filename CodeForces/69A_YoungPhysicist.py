#A. Young Physicist

#alternative
print('YNEOS'[any(map(sum,zip(*[map(int,input().split())for x in' '*int(input())])))::2])

#solution
a=b=c=0
for i in range(int(input())):
    x,y,z=map(int,input().split())
    a+=x
    b+=y
    c+=z
print("YES" if a==b==c==0 else "NO")
