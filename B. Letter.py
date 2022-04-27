s, t = input(), input()
c = str.count
for i in t :
    if (c(s, i) < c(t, i)) and i != ' ' :
        print("NO")
        exit(0)
print("YES")
#######################################online#################################
# online1
# s=list(input())+[' ']*200
# print(s)
# try:
#   map(s.remove,raw_input())
#   print ('YES')
# except:
#   print('NO')
# online2
# h=iter(sorted(''.join(input().split())))
# print(['NO','YES'][all(i in h for i in sorted(''.join(input().split())))])
