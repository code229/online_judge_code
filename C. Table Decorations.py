# a=list(map(int,input().split()))
# ans=min(a)
# a[0]-=ans
# a[1]-=ans
# a[2]-=ans
# for i in a:
#     if i==0:
#         a.remove(i)
# if(len(a)<2):
#     if(len(a)==0):
#         print(ans)
#         exit(0)
#     else:
#         ans+=min(ans,max(a)//3)
#         print(ans)
#         exit(0)
# s2=max(a)
# s1=min(a)
# #print(s1,s2)
# if s1==s2:
#     print((s1+s2)//3+ans)
#     quit(0)
# ans2=min(s1,s2//2)
# s1-=ans2
# #print(ans2)
# s2-=ans2*2
# ans+=min(ans,s2//3)
# s2-=min(ans,s2//3)*3
# ans+=ans2
# ans+=min(s1,(s1+s2)//3)
# print(ans)
###########################online####################
a=list(map(int,input().split()))
ans=sum(a)
print (min(ans//3,ans-max(a)))