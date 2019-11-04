#alternative
R=str.replace
print(R(R(R(input(),'--','2'),'-.','1'),'.','0'))

#solution
s=input()
s = s.replace('--','2')
s = s.replace('-.','1')
s = s.replace('.','0')
print(s)
