
input_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2020/baubles/baublesin.txt", "r")
output_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2020/baubles/baublesout.txt", "w")

ro, bo, s, rp, bp = map(int, input_file.readline().split())

def baubles():
    redC = ro + s
    blueC = bo + s
    if rp == 0 or bp == 0:
        return 0
    if redC < rp or blueC < bp:
        return 0
    elif s > rp or s> bp:
        return min()
    else:
        return min(blueC - bp, redC - ro) + 1
ans = baubles()
output_file.write(str(ans))
input_file.close()
output_file.close()
