import sys
sys.setrecursionlimit(1000000000)

# input_file = open("C:/Ting/Study/aio-practices/python-solutions/aio2022/tsp/tspin.txt", "r")
# output_file = open("C:/Ting/Study/aio-practices/python-solutions/aio2022/tsp/tspout.txt", "w")

input_file = open("tspin.txt", "r")
output_file = open("tspout.txt", "w")

N = int(input_file.readline().strip())

minArray = list(map(int, input_file.readline().split()))
maxArray = list(map(int, input_file.readline().split()))

def calculate():
    min = minArray[0]
    for i in range(len(minArray)):
        if(maxArray[i]<min):
            return "NO"
        if minArray[i] > min:
            min = minArray[i]
    return "YES"


result = calculate()
output_file.write(result)

input_file.close()
output_file.close()