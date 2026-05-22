"""A. Beautiful Year
time limit per test2 seconds
memory limit per test256 megabytes
It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.//

"""
year=int(input())
while (year):
    year+=1
    if len(set(str(year)))==len(str(year)):
        print(year)
        break


    