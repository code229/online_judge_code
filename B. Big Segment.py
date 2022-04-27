# n=int(input())
# s=list()
# mx=0
# for i in range(n):
#     a,b=map(int,input().split())
#     mx=max(mx,b)
#     s.append((a,b))
# t=sorted(s,key=lambda x:(x[0],-x[1]))
# print(s.index(t[0])+1 if t[0][1]==mx else "-1")
# n=int(input())
# s=[[*map(int,input().split())] for _ in ' '*n]
# s_=list(zip(*s))
# print(s_)
# x=min(s_[0])
# y=max(s_[1])
# if [x,y] in s:
#     print(s.index([x,y])+1)
# else:
#     print(-1)
n = int(input())
l = []
for i in range(n):
    x,y = map(int, input().split())
    l +=[(x,y)]
rm,lm = zip(*l)
a,b = min(rm), max(lm)
print("-1" if (a,b) not in l else l.index((a,b))+1)