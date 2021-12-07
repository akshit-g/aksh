x,y=2,3
l,m=100,200
while l>=50 and m<=300:
    n=l+m
    print(n)
    if l==80:
        break
    print(x**y**2)
    x+=1
    l-=10
    m+=50
