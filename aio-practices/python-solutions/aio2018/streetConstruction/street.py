input_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2018/streetconstruction/streetin.txt", "r")
output_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2018/streetconstruction/streetout.txt", "w")

N, K = map(int, input_file.readline().strip().split())
print("N:", N)
print("K:", K)

def findminMax():
    houses = N - K
    if houses <= 0:
        return 0
    print(houses%(K+1))
    print(houses//(K+1))
    ans = houses // (K+1) + (houses%(K+1)!=0)
    print("Answer:", ans)
    return ans

answer = findminMax()
print("Final answer:", answer)
output_file.write(str(answer))
print("Result written to output file.")