#solution

t = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53]
a, b = map(int, input().split())
print(['NO', 'YES'][t[t.index(a) + 1] == b])



#alternative

is_prime = lambda p: not any(d for d in range(2, p) if p % d == 0)
n, m = map(int, input().split())
print('YES' if is_prime(n) and is_prime(m) and not any(is_prime(p) for p in range(n + 1, m)) else 'NO')
