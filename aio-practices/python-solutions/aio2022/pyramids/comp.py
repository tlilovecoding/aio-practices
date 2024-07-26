def ascendoo(arr):
    last_occurrence = {}
    dp = [1] * len(arr)
    for i, num in enumerate(arr):
        if num - 1 in last_occurrence:
            dp[i] = dp[last_occurrence[num - 1]] + 1
            #keeping track of the last index in which the element can be found
        last_occurrence[num] = i
    return dp
 
infile = open("compin.txt", "r")
N = int(infile.readline())
arr = list(map(int, infile.readline().split()))
 
dp1 = ascendoo(arr)
arr.reverse()
dp2 = ascendoo(arr)
dp2.reverse()
 
longest = 0
for x in range(N):
    longest = max(longest, min(dp1[x], dp2[x]))
 
ans = N - (2*longest-1)
 
outfile = open("compout.txt", "w")
outfile.write(str(ans))