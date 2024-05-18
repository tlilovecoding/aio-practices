N = int(input())
chocobar = list(map(int, input().split()))
leftSum = sum(chocobar)
rightSum = 0
mina = float('inf')
for i in range(N-1, 0, -1):
    leftSum-=chocobar[i]
    rightSum+=chocobar[i]
    difference = abs(leftSum-rightSum)
    mina = min(difference, mina)
print(mina)