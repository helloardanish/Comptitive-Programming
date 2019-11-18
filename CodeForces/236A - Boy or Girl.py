#solution

s = len(set(input()))
if s%2==0:
    print('CHAT WITH HER!')
else:
    print('IGNORE HIM!')
    

#alternative 1

print(('CHAT WITH HER!','IGNORE HIM!')[len(set(input()))%2])
