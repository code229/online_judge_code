l=list(tuple(map(int,input().split())) for _ in range(int(input())))
l.sort(key=lambda x:(x[0],-x[1]))
a,b,cnt=l[0][0],l[0][1],0
for i in l:
    if(i[0]>a and i[1]<b):
        cnt+=1
    else:
        a,b=i[0],i[1]
print(cnt)

