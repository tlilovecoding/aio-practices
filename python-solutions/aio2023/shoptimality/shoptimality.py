import sys
sys.setrecursionlimit(1000000000)

N = None
M = None
H = []
S = []
P = []
answers = []

input_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2023/shoptimality/shopin.txt", "r")
output_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2023/shoptimality/shopout.txt", "w")

input_line = input_file.readline().strip()
N, M = map(int, input_line.split())
input_line = input_file.readline().strip()
H = list(map(int, input_line.split()))
input_line = input_file.readline().strip()
S = list(map(int, input_line.split()))
input_line = input_file.readline().strip()
P = list(map(int, input_line.split()))

def shoptimality():
    pass
    
input_file.close()
output_file.close()
