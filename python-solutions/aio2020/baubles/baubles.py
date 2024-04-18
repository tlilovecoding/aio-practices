import sys
sys.setrecursionlimit(1000000000)

answer = None

input_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2020//baubles/baublesin.txt", "r")
output_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2020//baubles/baublesout.txt", "w")

inp = input_file.readline().strip()  # read the first line

vals = list(map(int, inp.split()))

def baubles():
    a = inp[0]
    b = inp[1]
    spare = inp[2]
    d = inp[3]
    e = inp[4]
    if e>b+spare or d> a + spare:
        return 0
    if a+spare-d > b+spare-e:
        return a+spare-d
    else:
        return b+spare-e
answer = str(baubles())
output_file.write(answer + "\n")

# Finally, close the input/output files.
input_file.close()
output_file.close()