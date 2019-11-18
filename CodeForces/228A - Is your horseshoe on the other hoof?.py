#solution

i = map(int, input().split())
i = set(i)
ans = 4-len(i)
print(ans)

#alternative

print(4-len(set(input().split())))
