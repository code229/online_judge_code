s,j=input(),-1
for i in range(len(s)):
    if(s[i]!='0' and s[i]!='1'):
        j=i
        break
if(j!=-1) : s=s[:j] +'1'*(len(s)-j)
print(int(s,2))