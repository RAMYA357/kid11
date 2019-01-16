#armi
n=int(input())
k=int(input())
r=0
for i in range(n+1,k):
	arm=0
	temp=i
	while i>0:
		r=i%10
		arm=arm+(r*r*r)
		i=i//10
	if temp==arm:
		print(arm,end=" ")
