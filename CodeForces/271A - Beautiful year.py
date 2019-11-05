#solution

n=int(input())+1
while len(set(str(n)))<4:
    n+=1
print(n)

#try
while len(set(str(n)))-4:
    n+=1
    
    
#high level

def check(s):
	n = len(s)
	if(n == len(set(s))):
		return True
	else:
		return False
 
s = int(input())
s += 1
 
while(check(str(s)) == False):
	s += 1
 
print(s)

#happy coding
