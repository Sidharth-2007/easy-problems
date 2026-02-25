k,n,w=map(int,input().split())
x=0
for i in range(1,w+1):
    x+=(i*k)
if n>=x:
    print(0)
else:
    print(x-n)