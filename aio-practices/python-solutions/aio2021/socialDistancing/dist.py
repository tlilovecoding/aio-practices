input_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2021/socialdistancing/distin.txt", "r")
output_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2021/socialdistancing/distout.txt", "w")
N, K = map(int,input_file.readline().split())
arr = []
for i in range(0, N):
    arr.append(int(input_file.readline().strip())) 
def hippoPolice():
    ans = 1
    ptr = 0
    setd = set(arr)
    distances = sorted([i for i in setd])
    for i in range(1,len(distances)):
        if distances[i]-distances[ptr]>=K:
            ans+=1
            ptr = i
    return ans
output_file.write(str(hippoPolice()))
output_file.close()
input_file.close()