#!/usr/bin/env python
import sys
sys.setrecursionlimit(1000000000)
N = None

H = []

answer = None

# Open the input and output files.
input_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2022/beautifulbuildings/buildin.txt", "r")
output_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2022/beautifulbuildings/buildout.txt", "w")

# Read the value of N.
N = int(input_file.readline().strip())

# Read the heights.
input_line = input_file.readline().strip()
H = list(map(int, input_line.split()))

# TODO:
def beautifulBuildings():
    if len(H) == 2:
        return 0    
    differences = [0]*(N-1)
    ugly = 0
    for i in range(N-1):
        differences[i] = abs(H[i+1]-H[i])
        ugly+=differences[i]
    currUgly = ugly
    for x in range(N):
        if x == 0:
            currUgly= min(currUgly, ugly-differences[x])
        elif x == N-1:
            currUgly = min(currUgly, ugly - differences[x - 1])
        else:
            currUgly = min(currUgly, ugly-differences[x]-differences[x-1]+abs(H[x-1]-H[x+1]))
    return currUgly
answer = beautifulBuildings()
output_file.write("%d\n" % (answer))

input_file.close()
output_file.close()