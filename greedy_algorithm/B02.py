s = str(input())
s0 = s
while ("()" in s):
    s = s.replace("()", "")
print(len(s0) - len(s))