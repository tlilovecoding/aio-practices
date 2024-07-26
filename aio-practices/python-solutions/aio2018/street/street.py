import math
with open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2018/street/streetin.txt", "r") as input_file:
    N,K = map(int, input_file.readline().split())
def streetConstruction():
    return math.ceil((N-K)/(K+1))
ans = streetConstruction()
with open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2018/street/streetout.txt", "w") as output_file:
    output_file.write(str(ans))
                      