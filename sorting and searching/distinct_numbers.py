import sys
data = sys.stdin.buffer.read().split()
n = int(data[0])
print(len(set(map(int, data[1:1+n]))))