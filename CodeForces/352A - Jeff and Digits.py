#solution

n = int(input())
a = list(map(int,input().split()))
k = a.count(5)
l = a.count(0)
z = k//9
if(z!=0 and l!=0):
    print('5'*(z*9)+'0'*l)
elif(l!=0):
    print('0')
else:
    print(-1)
    
    

#alternative 1

a,b=int(input()),input();c=b.count('5');d=a-c;print(int('5'*(9*(c//9))+'0'*d) if d else '-1')



#alternative 2

n=int(input())
five=int(input().count('5'))
zero=n-five
print(int('5'*(five-five%9) + '0'*zero) if zero else -1
