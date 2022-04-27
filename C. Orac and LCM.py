
from math import gcd

def LCM(x, y) :
    return (x * y) // gcd(x, y)
def gcd_of_lcm(n, arr) :

    suff=[1] * n


    suff[n - 1]=arr[n - 1]
    for i in range(n - 2, -1, -1) :
        suff[i]=gcd(arr[i], suff[i + 1])

    lcm=[]

    for i in range(n - 1) :
        y=LCM(arr[i], suff[i + 1])
        lcm.append(y)
    ans=lcm[0]
    for i in range(1, n - 1) :
        ans=gcd(ans, lcm[i])

    print(ans)
n=int(input())
a=list(map(int,input().split()))
gcd_of_lcm(n, a)
