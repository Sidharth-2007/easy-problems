'''Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
LEET CODE '''
def chelli(s):
    dic=["}","]",")"]
    lst1=["{","[","("]

    str1=""
    for i in s:
        if i in lst1:
            str1+=i
        else:
            if len(str1)==0:
                return "false"
            elif (lst1[dic.index(i)] == str1[-1] ) :
                str1=str1[:-1]
            else:
                return "false"
                
    return "true"
s="{()}[]"
print(chelli(s))

