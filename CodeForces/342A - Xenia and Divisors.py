#solution

n=int(input())
a=list(map(int,input().split()))
p=a.count(1);q=a.count(2);r=a.count(3);s=a.count(4);t=a.count(6)
if (p==n//3 and q+r==n//3 and s+t==n//3 and s<=q and t>=r):
    for i in range(r):
        print(1,3,6)
    for i in range(s):
        print(1,2,4)
    for i in range(t-r):
        print(1,2,6)
else:
    print(-1)
    
    
    
#alternative 1


'''input
6
2 2 1 1 4 6
'''
n = int(input())
l = list(map(int, input().split()))
a, b, c, d, e = l.count(1), l.count(2), l.count(3), l.count(4), l.count(6)
ans = ""
if 5 in l or 7 in l or a != b+c or a != d+e or d > b:
	print(-1)
else:
	for _ in range(d):
		ans += "1 2 4\n"
	for _ in range(b-d):
		ans += "1 2 6\n"
	for _ in range(c):
		ans += "1 3 6\n"
print(ans[:-1])



#alternative 2


from collections import Counter
 
 
def main():
    input()
    c = Counter(map(int, input().split()))
    if c[5] or c[7] or c[2] < c[4] or c[2] + c[3] != c[1] or c[1] != c[4] + c[6]:
        print(-1)
        return
    res = [None] * c[1]
    for i in range(c[4]):
        res[i] = '1 2 4'
    for i in range(c[4], c[2]):
        res[i] = '1 2 6'
    for i in range(c[2], c[1]):
        res[i] = '1 3 6'
    print('\n'.join(res))
 
 
if __name__ == '__main__':
    main()




#alternative 3


n = int(input())
a = list(map(int, input().split()))
c = [0]*8
for i in range(1, 8):
    c[i] = a.count(i)
if c[5] or c[7] or c[1] != n//3 or c[3] > c[6] or c[4] > c[2] or c[6]-c[3] != c[2]-c[4]:
    print(-1)
else:
    for i in range(c[4]):
        print('1 2 4')
    for i in range(c[2]-c[4]):
        print('1 2 6')
    for i in range(c[3]):
        print('1 3 6')
