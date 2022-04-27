for i in range(int(input())):
    s=input()
    cur,min,ans=0,0,len(s)
    for j in range(len(s)):
        if s[j]=='+': cur+=1
        else: cur-=1
        if(cur<min):
            min=cur
            ans+=j+1
    print(ans)