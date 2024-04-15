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

# TODO: This is where you should compute your solution. Store the number of
# different farmhouses that you visit into the variable answer.

answer = None

# Write the answer to the output file.
output_file.write("%d\n" % (answer))

# Finally, close the input/output files.
input_file.close()
output_file.close()