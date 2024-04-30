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
de f beautifulBuildings():
    maxDiff = 0
    #find maxx difference, then take the midle of it
    for i in range(1,N-1):
        pass
output_file.write("%d\n" % (answer))

input_file.close()
output_file.close()