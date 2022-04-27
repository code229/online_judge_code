t=int(input())
data={}
for i in range(0,t):
    s=input()
    if s in data:
        print(s+str(data[s]))
        data[s]+=1
    else:
        print("OK")
        data[s]=1
