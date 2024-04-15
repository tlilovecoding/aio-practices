 #!/usr/bin/env python
import sys
sys.setrecursionlimit(1000000000)

#
# Solution Template for Election II
# 
# Australian Informatics Olympiad 2022
# 
# This file is provided to assist with reading and writing of the input
# files for the problem. You may modify this file however you wish, or
# you may choose not to use this file at all.
#

# N is the number of votes.
N = None

# votes contains the sequence of votes.
votes = None

answer = None

# Open the input and output files.
input_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2022/ElectionII/elecin.txt", "r")
output_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2022/ElectionII/elecout.txt", "w")

# Read the value of N and the votes from the input file.
N = int(input_file.readline().strip())
votes = input_file.readline().strip()

# TODO: This is where you should compute your solution. Store the winning
# candidate ('A', 'B' or 'C'), or 'T' if there is a tie, into the variable
# answer.

def getWinner():
    candidates = {}
    for c in votes:
        if c in candidates:
            candidates[c] += 1
        else:
            candidates[c] = 1
    
    if candidates.get('A', 0) > candidates.get('B', 0) and candidates.get('A', 0) > candidates.get('C', 0):
        return 'A'
    if candidates.get('B', 0) > candidates.get('A', 0) and candidates.get('B', 0) > candidates.get('C', 0):
        return 'B'
    if candidates.get('C', 0) > candidates.get('A', 0) and candidates.get('C', 0) > candidates.get('B', 0):
        return 'C'
    return 'T'

answer = getWinner()

# Write the answer to the output file.
output_file.write(answer + "\n")

# Finally, close the input/output files.
input_file.close()
output_file.close()