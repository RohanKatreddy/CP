n, m = [int(x) for x in input().split()]
MODULO = 1e9 + 7
values = list(map(int, input().split()))


if values[0] == 0:
    dp = [1] * (m+2)
    dp[0] = 0
    dp[m+1] = 0
else:
    dp = [0] * (m+2)
    dp[values[0]] = 1

for i in range(1, n):
    ndp = [0] * (m+2)
    for j in range(1, m+1):
        if (values[i] != 0 and values[i] != j): continue
        ndp[j] = (dp[j - 1] + dp[j] + dp[j+1]) % MODULO
    dp = ndp

print(int(sum(ndp) % MODULO))