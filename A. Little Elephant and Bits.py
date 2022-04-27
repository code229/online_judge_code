s=input()
print(s[0:s.find('0')]+s[s.find('0')+1:] if '0' in s else s[0:-1:])
