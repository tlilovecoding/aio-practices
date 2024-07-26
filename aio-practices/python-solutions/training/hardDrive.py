with open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/training/drivein.txt", "r") as input_file:
    N, M = map(int, input_file.readline().split())
output_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/training/driveout.txt", "w")
dp = [[0, 0] for _ in range(N+1)]
ans = 0
dp[0][0] = 1
dp[0][1] = 1
for i in range(1,N+1):
    dp[i][0] = ((dp[i-1][0]*dp[i-1][0])%M + (dp[i-2][0]*dp[i-2][0])%M*dp[i-1][1] +1)%M
    dp[i][1] = ((dp[i-2][0]*dp[i-2][0])%M*(dp[i-1][1]) + 1)%M
dp[N][0] = dp[N][0]%M
output_file.write(str(dp[N][0]))