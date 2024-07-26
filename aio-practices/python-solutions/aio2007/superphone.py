with open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2007/phonein.txt", "r") as input_file:
    N = int(input_file.readline().strip())
    leftPath = [0]*(N-1)
    rightPath = [0]*(N-1)
    midDistances = [0]*N
    for i in range(N-1):
        leftPath[i], midDistances[i], rightPath[i] = map(int, input_file.readline().strip().split())
    midDistances[N-1] = int(input_file.readline().strip())
    dp = [[float('inf')]*2 for _ in range(N)]
    dp[0][0] = 0
    dp[0][1] = midDistances[0]
    for i in range(1,N):
        dp[i][0] = min(dp[i-1][0]+midDistances[i-1]+rightPath[i-1], dp[i-1][1]+rightPath[i-1])
        dp[i][1] = min(dp[i-1][1]+midDistances[i-1]+leftPath[i-1], dp[i-1][0]+leftPath[i-1])
    ans = min(dp[N-1][0]+midDistances[N-1], dp[N-1][1])
    print(ans)