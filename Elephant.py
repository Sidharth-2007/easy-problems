a=int(input())
lst1=[5,4,3,2,1]
count=0
for i in lst1:
    while(a>=i):
        count+=1
        a-=i
print(count)
