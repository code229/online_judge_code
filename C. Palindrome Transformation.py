import sys
def find_cost(a,b):
    ch="abcdefghijklmnopqrstuvwxyz"
    min_cost=sys.maxsize
    # print(a,b)
    a, b=min(a, b), max(a, b)
    c=ch.index(b) - ch.index(a)
    d=(25 - ch.index(b)) + (ch.index(a) - 0) + 1
    return int(min(c, d))


n,k=map(int,input().split())

st=input()
mid=(n+1)//2
s,e=int(),int()
ans=0
#print(mid)
if(k<=mid):
    s,e=1,mid
    if n%2:
        e-=1
        if(k==mid):
            k-=1
            ans+=1
else:
    s,e=mid+1,n
j=0
if(s==1):j=n
else:
    if(n%2):
        j=s-2
    else: j=s-1
cost=[0]*(n+5)
s=int(s)
e=int(e)
for i in range(int(s),int(e+1)):
   cost[i]=find_cost(st[i-1],st[-i])


if sum(cost)==0:
    print(0)
    exit(0)
f,l=0,0
ff,ll=k,k
for i in range(k,e+1):
    if cost[i]!=0:
        ll=i
for i in range(s,k+1):
    if cost[i]!=0:
        ff=i
        break
cst=sum(cost[ff:ll+1])+ll-ff+min(k-ff,ll-k)

ans+=cst
print(ans)