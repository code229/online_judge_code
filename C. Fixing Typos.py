s=''
for i in input():
    if not (len(s)>=2 and s[-1]==s[-2]==i or len(s)>=3 and s[-2]==s[-3] and s[-1]==i):
        s+=i
print(s)