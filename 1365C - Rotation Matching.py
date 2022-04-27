n=int(input())
r=lambda : list(map(int, input().split()))
pos, ans, a, b=[0] * (n + 1), dict(), r(), r()
for i in range(1, n + 1) : pos[a[i - 1]]=i
for i in range(1, n + 1) :
    ps=pos[b[i - 1]] - i
    if ps < 0 : ps+=n
    ans[ps]=ans.get(ps, 0) + 1
print(max(ans.values()))
