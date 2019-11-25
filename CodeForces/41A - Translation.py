#solution

print(['NO','YES'][input()==input()[::-1]])


#alternative 1

r=input;print("YNEOS"[r()!=r()[::-1]::2])
