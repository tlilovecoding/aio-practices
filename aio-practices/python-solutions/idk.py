import sys
sys.setrecursionlimit(1000000000)
input_file = open("bendin.txt", "r")
output_file = open("bendout.txt", "w")
 
r1_x1 = None
r1_y1 = None
r1_x2 = None
r1_y2 = None
r2_x1 = None
r2_y1 = None
r2_x2 = None
r2_y2 = None
input_line = input_file.readline().strip()
r1_x1, r1_y1, r1_x2, r1_y2 = map(int, input_line.split())
input_line = input_file.readline().strip()
r2_x1, r2_y1, r2_x2, r2_y2 = map(int, input_line.split())

answer = 0
areaRect1 = (r1_y2-r1_y1)*(r1_x2-r1_x1)
areaRect2 = (r2_y2-r2_y1)*(r2_x2-r2_x1)
overlap = 0
if r1_y2 > r2_y1 and r1_x2 > r2_x1:
    overlap = (r1_y2-r2_y1)*(r1_x2-r2_x1)
answer = areaRect1 + areaRect2 + overlap
# Write the answer to the output file.
output_file.write("%d\n" % (answer))
input_file.close()
output_file.close()