input()
lit=list(map(int,input().split()))
t,r=lit.count(100),lit.count(200)
print("YNEOS"[(t+r*2)%2 or r%2 and t<2::2])