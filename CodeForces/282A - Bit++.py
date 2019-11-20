#solution

print(sum(input().count('+')-1 for i in range(int(input()))))

#alternative

print(sum(44-ord(input()[1])for i in[0]*int(input())))
