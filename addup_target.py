'''Given an array of numbers and a target, find two numbers that add up to the target.
**Example**:
Input: `nums = [2, 7, 11, 15], target = 9` → Output: `[0, 1]`

**Why it's good**:
- Introduces hash maps (or dictionaries) for efficient lookups.'''

target=8
lst=[1,3,4,4]
for i in range(len(lst)):
    for j in range(i+1,len(lst)):
        if lst[i]+lst[j]==target:
            lst1=[i,j]
            print(lst1)
            break
