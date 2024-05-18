N = int(input())
chocobar = []
for _ in range(N):
    chocobar.append(int(input()))
leftSum = sum(chocobar)
rightSum = 0
mina = float('inf')
print(123456789)
for i in range(N-1, 0, -1):
    leftSum-=chocobar[i]
    rightSum+=chocobar[i]
    difference = abs(leftSum-rightSum)
    mina = min(difference, mina)
print(mina)