#solution


s=str(input())
t=str(input())
tt=set(t)
for j in tt:
    if j==' ':
        continue
    if t.count(j)>s.count(j):
        print('NO')
        break
else:
    print('YES')



#alternative 1


'''input
abcdefg hijk
k j i h g f e d c b a
'''
s1, s2 = input().replace(" ", ""), input().replace(" ", "")
if all(s1.count(l) >= s2.count(l) for l in set(s2)):
	print("YES")
else:
	print("NO")
  
  
  
#alternative 2


from collections import Counter
s = [Counter(input().replace(' ', '')) for i in range(2)]
print('YES' if not s[1] - s[0] else 'NO')
