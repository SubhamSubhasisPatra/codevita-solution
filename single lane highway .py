from itertools import permutations
import math 


n=int(input())
l=list(map(int,input().split()))



cc=[]

s1=math.factorial(n)//math.factorial(n-(n))
s2=math.factorial(n)//math.factorial(n-(n-1))

cc.append(s1)
cc.append(s2)

if(n%2==0):
	t=sum(cc)+2
else:
	t=sum(cc)-1 

final = str(t/cc[-1])
print(final[0:8])
#print("%.6f"%(t/cc[-1]))
