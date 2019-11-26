#solution



s = input()
ans='hello'
count=j=0
for i in s:
    if i==ans[j]:
        j+=1;
        count+=1;
        if (count==5):
            print('YES')
            break
            
else:
    print('NO')
