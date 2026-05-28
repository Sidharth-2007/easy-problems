'''A. In Search of an Easy Problem
When preparing a tournament, Codeforces coordinators try treir best to make the first problem as easy as possible. This time the coordinator had chosen some problem and asked n
 people about their opinions. Each person answered whether this problem is easy or hard.

If at least one of these n
 people has answered that the problem is hard, the coordinator decides to change the problem. For the given responses, check if the problem is easy enough.

Input
The first line contains a single integer n (1≤n≤100) — the number of people who were asked to give their opinions.

The second line contains n
 integers, each integer is either 0  or 1. If i-th integer is 0, then i-th person thinks that the problem is easy; if it is 1,
then i-th person thinks that the problem is hard.

'''
a=int(input()) #length
lst1=list(map(int, input().split()))
print(lst1)
if 1 in lst1:
    print("HARD")
else:
    print("EASY")