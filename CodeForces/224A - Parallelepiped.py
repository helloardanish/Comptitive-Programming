#solution

from math import sqrt
a,b,c=map(int,input().split())
d=4*(sqrt(a*b//c)+sqrt(c*b//a)+sqrt(a*c//b))
print(int(d))

#alternative

a,b,c=map(int,input().split())
k=(a*b*c)**0.5
print(4*int(k/a+k/b+k/c))
