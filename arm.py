#arm
N=int(input())
r=0
arm=0
temp=N
while N>0:
	r=N%10
	arm=arm+r*r*r
	N=N//10
if temp==arm:
	print("yes")
else:
	print("no")
