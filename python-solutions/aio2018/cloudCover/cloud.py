input_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2018/cloudcover/cloudin.txt", "r")
output_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2018/cloudcover/cloudout.txt", "w")
N, K = map(int, input_file.readline().split())
clouds = [0] * (N - 1)
def cloudCover():
    currSum = 0
    for i in range(K - 1):
        currSum += clouds[i]
    maxSum = currSum
    for i in range(K-1, N):
        currSum -= clouds[l]
        currSum += clouds[r]
        maxSum = max(currSum, maxSum)
        l += 1
        r += 1
    return maxSum

ans = cloudCover()
output_file.write(str(ans))
output_file.close()
