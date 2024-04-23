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

def get_num():
    redO = vals[0]
    blueO = vals[1]
    spare = vals[2]
    redT = vals[3]
    blueT = vals[4]
    if redO > redT and blueO > blueT:
        if redT == 0:
            return blueO - blueT + 1 + spare
        elif blueT == 0:
            return redO - redT + 1 + spare
        else:
            return min(redO - redT, blueO - blueT) + 1 + spare
    elif redO < redT and blueO < blueT:
        return spare - (redT - redO + blueT - blueO) + 1
    else:
        if blueT == 0:
            return spare - redT + redO + 1
        elif redT == 0:
            return spare - blueT + blueO + 1
        else:
            return spare - max(redT - redO, blueT - blueO) + 1

answer = get_num()

# Write the answer to the output file.
output_file.write(str(answer) + "\n")

# Finally, close the input/output files.
input_file.close()
output_file.close()