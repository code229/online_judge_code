# input()
# lit=input()
# c=str.count
# a=c(lit,'1')
# a2=c(lit,'2')
# a3=c(lit,'3')
# a4=c(lit,'4')
# a6=c(lit,'6')
# a5=c(lit,'5')
# a7=c(lit,'7')
# ans=''
# k=min(a,a2,a4)
# ans+='1 2 4n'*min(a,a2,a4)
# a-=k
# a2-=k
# a4-=k
# k=min(a,a2,a6)
# ans+='1 2 6n'*min(a,a2,a6)
# a-=k
# a2-=k
# a6-=k
# k=min(a,a3,a6)
# ans+='1 3 6n'*min(a,a3,a6)
# a-=k
# a3-=k
# a6-=k
# if(a+a2+a3+a4+a6+a5+a7>0):
#     print("-1")
# else:
#     l=ans.split('n')
#     for i in l:
#         print(i)


##############online_____code###########

# n=int(input())
# a=list(map(int,input().split()))
# if 5 in a or 7 in a:
#     print(-1)
#     exit(0)
# b=[0]*(8)
# for i in range(8):
#     b[i]=a.count(i)
# if b[2]+b[3]==(n//3) and b[1]==n//3 and b[4]+b[6]==n//3 and b[2]>=b[4] and b[6]>=b[3]:
#     print('1 2 4\n'*b[4] +'1 3 6\n'*b[3]+ '1 2 6\n'*(b[6]-b[3]) )
# else:
#     print(-1)


