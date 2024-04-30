#!/usr/bin/env python
import sys
sys.setrecursionlimit(1000000000)

#
# Solution Template for Beautiful Buildings
# 
# Australian Informatics Olympiad 2022
# 
# This file is provided to assist with reading and writing of the input
# files for the problem. You may modify this file however you wish, or
# you may choose not to use this file at all.
#

# N is the number of buildings.
N = None

# H contains the heights on the buildings. Note that here the buildings are
# numbered starting from 0.
H = []

answer = None

# Open the input and output files.
input_file = open("buildin.txt", "r")
output_file = open("buildout.txt", "w")

# Read the value of N.
N = int(input_file.readline().strip())

# Read the heights.
input_line = input_file.readline().strip()
H = list(map(int, input_line.split()))

# TODO: This is where you should compute your solution. Store the minimum
# ugliness you can achieve into the variable answer.
def mini_ugliness():
    if len(H) == 2:
        return 0
    all_height = 0
    diff = [0] * (len(H) - 1)
    for i in range(1, len(H)):
        diff[i - 1] = abs(H[i] - H[i - 1])
        all_height += diff[i - 1]
    min_val = all_height
    for i in range(len(H)):
        if i == 0:
            min_val = min(min_val, all_height - diff[0])
        elif i == len(H) - 1:
            min_val = min(min_val, all_height - diff[i - 1])
        else:
            min_val = min(min_val, all_height - diff[i - 1] - diff[i] + abs(H[i - 1] - H[i + 1]))
    return min_val

answer = mini_ugliness()

# Write the answer to the output file.
output_file.write("%d\n" % (answer))

# Finally, close the input/output files.
input_file.close()
output_file.close()