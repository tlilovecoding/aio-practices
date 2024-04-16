#!/usr/bin/env python
import sys
sys.setrecursionlimit(1000000000)

answer = None

# input_file = open("C:/Ting/Study/aio-practices/python-solutions/aio2020/baubles/baublesin.txt", "r")
# output_file = open("C:/Ting/Study/aio-practices/python-solutions/aio2020/baubles/baublesout.txt", "w")

input_file = open("baublesin.txt", "r")
output_file = open("baublesout.txt", "w")

inp = input_file.readline().strip()  # read the first line

vals = list(map(int, inp.split()))

# Write the answer to the output file.
output_file.write(answer + "\n")

# Finally, close the input/output files.
input_file.close()
output_file.close()