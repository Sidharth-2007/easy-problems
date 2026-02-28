'''Write a program to reverse only the alphabets in a string without changing the position of special characters.'''  
a=input("Enter the String:")
l=len(a)
lst=list(a)
for i in range(0,l):
    if a[i].isalnum():
        lst[-(i+1)]=a[i]
    else:
        lst[i]=a[i]
print("".join(lst))
