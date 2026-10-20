_, x = [int(i) for i in input().split()]
coins = [int(coin) for coin in input().split()]

def count(target):
    if target == 0:
        return 1
    if target < 0:
        return 0

    sum = 0
    for coin in coins:
        sum += count(target - coin)
    
    return sum

print(count(x))    