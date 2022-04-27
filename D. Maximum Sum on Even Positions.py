t=int(input())
while(t>0):
    n,a=int(input()),list(map(int,input().split()))
    mx_n,mx=0,0
    for i in range(0,n-1,2):
        mx_n+=(a[i+1]-a[i])
        mx=max(mx_n,mx)
        mx_n=max(0,mx_n)
    mx_n=0
    for i in range(1,n-1,2):
        mx_n+=(a[i]-a[i+1])
        mx=max(mx_n,mx)
        mx_n=max(0,mx_n)
    even=sum(a[i] for i in range(n) if i%2==0)
    print(even+mx)
    t-=1