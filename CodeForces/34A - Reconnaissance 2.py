#solution


n,b=int(input()),[]
a= list(map(int, input().split()))
for i in range(n):b.append(abs(a[i]-a[i-1]))
if min(b)==b[0]:print(n,'1')
else:print(b.index(min(b)),b.index(min(b))+1)



#alternative 1

n = int(input())
soldiers = list(map(int, input().split()))
 
minimum = abs(soldiers[0] - soldiers[1])
x, y = 1, 2
 
for i in range(1, n):
    j = 0 if i == n - 1 else i + 1
    diff = abs(soldiers[i] - soldiers[j])
    if diff < minimum:
        minimum = diff
        x, y = i + 1, j + 1
 
print(x, y)


#alternative 2


def main():
    n = int(input())
    l = list(map(int, input().split()))
    x = min(range(n), key=lambda i: abs(l[i] - l[i - 1]))
    print((x - 1) % n + 1, x + 1)
 
 
if __name__ == '__main__':
    main()
