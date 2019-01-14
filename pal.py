#palindrome
N=int(input())
r=0
pal=0
temp=N
while N>0:
	r=N%10
	pal=pal*10+r
	N=N//10
if temp==pal:
	print("yes")
else:
	print("no")
