for _ in range(int(input())):
    a,b,c,d=map(int,input().split())
    x,y,x1,y1,x2,y2=map(int,input().split())
    xn,yn=x-a+b,y-c+d
    print("YNEOS"[1-(x1<=xn and xn<=x2 and y1<=yn and yn<=y2 and(x2>x1 or a+b==0) and(y2>y1 or c+d==0))::2])
