import sys
sys.setrecursionlimit(1000000000)

#
# Solution Template for TeleTrip
# 
# Australian Informatics Olympiad 2023
# 
# This file is provided to assist with reading and writing of the input
# files for the problem. You may modify this file however you wish, or
# you may choose not to use this file at all.
#

# N is the number of instructions.
N = None

# instructions contains the sequence of instructions.
instructions = None

# Open the input and output files.
input_file = open("telein.txt", "r")
output_file = open("teleout.txt", "w")

# Read the value of N and the instructions from the input file.
N = int(input_file.readline().strip())
instructions = input_file.readline().strip()

def calculate():
    arr = [1] * (2 * N + 1)
    arr[N] = 0
    cur = N
    for c in instructions:
        if c == 'T':
            cur = N
        elif c == 'L':
            cur -= 1
            arr[cur] = 0
        elif c == 'R':
            cur += 1
            arr[cur] = 0

    return sum(1 for i in arr if i == 0)

# TODO: This is where you should compute your solution. Store the number of
# different farmhouses that you visit into the variable answer.

answer = calculate()

# Write the answer to the output file.
output_file.write("%d\n" % (answer))

# Finally, close the input/output files.
input_file.close()
output_file.close()