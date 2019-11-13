#solution

m = input()
n = input()
s = ''
for i in range(len(m)):
    if m[i]==n[i]:
        s=s+'0'
    else:
        s=s+'1'
print(s)

#solution 2

for x,y in zip(input(),input()):
    print('0' if x==y else '1', end='')


#alternative


i=input;print(''.join('01'[a!=b]for a,b in zip(i(),i())))

#alternative 2

print(*(int(l!=r)for l,r in zip(input(),input())),sep='')

#alternative 3

for a,b in zip(input(),input()):
    print(int(a)^int(b),end = '')
    
#alternative 4

a,b = input(),input()
print(''.join([('0','1')[i!=k] for i,k in zip(a,b)]))
