#ab
hr1,min1=map(int,input().split())
hr2,min2=map(int,input().split())
min=(60-abs(min2-min1))
hr=abs(hr2-hr1)
if hr==1:
    hr=00
    print(hr,end=" ")
    print(min)
else:
    print(hr,end=" ")
    print(min)
