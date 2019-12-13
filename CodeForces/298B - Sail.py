#solution



t, x, y, a, b = map(int, input().split())
wind = input()
 
found = False
 
for i in range(t):
    if wind[i] == 'E':
        if x < a:
            x += 1
 
    elif wind[i] == 'W':
        if x > a:
            x -= 1
 
    elif wind[i] == 'S':
        if y > b:
            y -= 1
 
    elif wind[i] == 'N':
        if y < b:
            y += 1
 
    if x == a and y == b:
        found = True
        print(i + 1)
        break
 
if not found:
    print(-1)



#alternative 1

def main():
    t, x, y, ex, ey = map(int, input().split())
    x -= ex
    y -= ey
    for i, c in enumerate(input()):
        if x == 0 == y:
            print(i)
            return
        if c == 'E':
            if x < 0:
                x += 1
        elif c == 'W':
            if x > 0:
                x -= 1
        elif c == 'N':
            if y < 0:
                y += 1
        elif c == 'S':
            if y > 0:
                y -= 1
    print(t if x == 0 == y else -1)
 
 
if __name__ == '__main__':
    main()



#alternative 2



t, sx, sy, ex, ey = map(int, input().split())
d = {'W':max(0, sx - ex), 'E':max(0, ex - sx), 'N':max(0, ey - sy), 'S':max(0, sy - ey)}
for (i, c) in enumerate(input(), 1):
  if d[c] > 0:
    d[c] -= 1
  if any(d.values()) == False:
    print(i)
    break
else:
  print(-1)
