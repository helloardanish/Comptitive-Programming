#solution 

s = input()
no_of_low_string = 0
no_of_upp_string = 0
for l in s:
    if l.islower():
        no_of_low_string += 1
    else:
        no_of_upp_string += 1
if no_of_low_string >= no_of_upp_string:
    print(s.lower())
else:
    print(s.upper())
