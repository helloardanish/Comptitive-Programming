#solution

s=(input())
s=s.replace("144","*")
s=s.replace("14","*")
s=s.replace("1","*").replace("*","")
 
print(["NO","YES"][len(s)==0])



#alternative 1


s = input().replace('144', 'a').replace('14', 'a').replace('1', 'a')
print(['YES', 'NO'][s.count('a') != len(s)])


#alternative 2

import re
print('YES' if re.match(r'(14?4?)*$', input()) else 'NO')
