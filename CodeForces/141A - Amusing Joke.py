#solution

gn = input()
rn = input()
pl = input()
print('YES' if sorted(gn+rn)==sorted(pl) else 'NO')

#alternative

print("YNEOS"[sorted(input()+input())!=sorted(input())::2])
