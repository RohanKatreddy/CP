from collections import defaultdict

d = defaultdict(int)

def solve(x):
    if x == 0:
        return 1

    if x in d:
        return x

    count = 0

    for i in range(1, min(6, x)+1):
        count = (count + solve(x-i)) % (1e9 + 7)
    
    return count


print(solve(int(input())))