with open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2022/tsp/tspin.txt", "r") as input_file:
    N = int(input_file.readline().strip())
    low = list(map(int, input_file.readline().split()))
    high = list(map(int, input_file.readline().split()))
def tsp():
    lastMax = low[0]
    for x in range(1,N):
        if lastMax>low[x]:
            if high[x]<lastMax:
                return 'NO'
        else:
            lastMax = low[x]
    return 'YES'
ans = tsp()
with open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2022/tsp/tspout.txt", "w") as output_file:
    output_file.write(str(ans))