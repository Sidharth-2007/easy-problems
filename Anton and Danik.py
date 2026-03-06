n=int(input())
str1=input()
a=str1.count('A')
d=str1.count('D')
if (a>d):
    print("Anton")
elif(a<d):
    print("Danik")
else:
    print("Friendship")

