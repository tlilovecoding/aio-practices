input_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2018/cloudcover/cloudin.txt", "r")
output_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2018/cloudcover/cloudout.txt", "w")
N, K = map(int, input_file.readline().split())
clouds = [int(input_file.readline()) for _ in range(N - 1)]  # Read N-1 cloud cover values

def cloudCover():
    curr = sum(clouds[:K-1])  # Sum of the first K elements
    ans = float('inf')
    for i in range(N-K):  # Adjusted loop range
        curr += clouds[i + K - 1]
        ans = min(curr, ans)
        curr -= clouds[i]
    return ans
anz = cloudCover()
print(anz)
output_file.write(str(anz))
output_file.close()