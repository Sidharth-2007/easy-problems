'''Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
LEET CODE '''
class Solution(object):
    def isValid(self, s):
        arr=[]
        d={"{":"}","[":"]","(":")",}
        for i in range(len(s)):
            if (s[i] in "{(["):
                arr.append(s[i])
            else:
                if not arr:
                    return False
                elif(d[arr[-1]]==s[i]):
                    arr.pop()
                else:
                    return False
        if not arr:
                    return True



