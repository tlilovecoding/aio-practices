#!/usr/bin/env python
import sys
sys.setrecursionlimit(1000000000)

#
# Solution Template for Social Distancing
# 
# Australian Informatics Olympiad 2021
# 
# This file is provided to assist with reading and writing of the input
# files for the problem. You may modify this file however you wish, or
# you may choose not to use this file at all.
#

# N is the number of meals.
N = None

# K is the minimum distance between hippos.
K = None

# D contains the locations of the meals.
D = [None for x in range(100005)]

answer = None

# Open the input and output files.
input_file = open("distin.txt", "r")
output_file = open("distout.txt", "w")

# input_file = open("C:/Ting/Study/aio-practices/python-solutions/aio2021/hippodistance/distin.txt", "r")
# output_file = open("C:/Ting/Study/aio-practices/python-solutions/aio2021/hippodistance/distout.txt", "w")

# Read the value of N and K.
input_line = input_file.readline().strip()
N, K = map(int, input_line.split())

# Read the locations of the meals.
for i in range(0, N):
    D[i] = int(input_file.readline().strip())


# TODO: This is where you should compute your solution. Store the maximum
# number of hippos that can be invited into the variable answer.
def how_many():
    ans = 1

    set_meals = set(D)
    list_meals = sorted([meal for meal in set_meals if meal is not None])

    left = 0
    right = 1
    while right < len(list_meals):
        if list_meals[right] - list_meals[left] >= K:
            ans += 1
            left = right
            right += 1
        else:
            right += 1
    return ans

answer = how_many()

# Write the answer to the output file.
output_file.write("%d\n" % (answer))

# Finally, close the input/output files.
input_file.close()
output_file.close()