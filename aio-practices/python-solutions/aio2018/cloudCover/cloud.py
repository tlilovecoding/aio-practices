input_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2018/cloudcover/cloudin.txt", "r")
output_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2018/cloudcover/cloudout.txt", "w")
N, K = map(int, input_file.readline().split())
clouds = [int(input_file.readline()) for _ in range(N - 1)]  # Read N-1 cloud cover values

def cloudCover():
    curr = sum(clouds[:K])
    ans = curr
    for i in range(K, N-1):
        curr += clouds[i]
        curr-= clouds[i-K]
        ans = min(curr, ans)
    return ans
anz = cloudCover()
print(anz)
output_file.write(str(anz))
output_file.close()