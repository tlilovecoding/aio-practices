input_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2022/levelground/groundin.txt", "r")
output_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2022/levelground/groundout.txt", "w")

N = int(input_file.readline().strip())
altitudes = list(map(int, input_file.readline().strip().split()))
def levelGround():
    maxA = altitudes[0]
    currAmt = altitudes[0]
    prev = altitudes[0]
    for i in range(1,len(altitudes)):        
        if altitudes[i] == prev:
            currAmt += prev
            prev = altitudes[i]
        else:
            currAmt = altitudes[i]
            prev = altitudes[i]
        maxA = max(maxA, currAmt)

    return maxA

ans = levelGround()
output_file.write(str(ans))

input_file.close()
output_file.close()
