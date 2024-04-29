input_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2022/ElectionII/elecin.txt", "r")
output_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2022/ElectionII/elecout.txt", "w")
D, C = int(input_file.readline().strip().split())
p1,c1 = int(input_file.readline().strip().split())
p2,c2 = int(input_file.readline().strip().split())
def cookies():
    #1, 2, 1&2