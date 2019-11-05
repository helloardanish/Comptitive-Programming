#alternative

print(sum(abs(x-2)+abs(y-2)for x in range(5) for y,v in enumerate(input().split()) if int(v)))


#solution

for i in range(5):
	a = input()
	if '1' in a:
		print(abs(i-2) + abs(a.index('1')//2-2))
    
#solution 2

for i in range(5):
    s=input().find('1')
    if s+1:
        print(abs(i-2)+abs(s//2-2))
        
#solution 3


l=[2,1,0,1,2]
for i in l:
  s=input()
  if "1" in s:
    print(i+l[s.find("1")//2])
