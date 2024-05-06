input_file = open("ghostin.txt", "r")
output_file = open("ghostout.txt", "w")

# input_file = open("C:/Ting/Study/aio-practices/python-solutions/aio2020/ghost/ghostin.txt", "r")
# output_file = open("C:/Ting/Study/aio-practices/python-solutions/aio2020/ghost/ghostout.txt", "w")

n, k = map(int, input_file.readline().split())
count = {} # use this to record encounter
meters = [] # use this to record positions
seconds = [] # use this to record seconds

# get all ghosts
for _ in range(n):
    m, s = map(int, input_file.readline().split())
    meters.append(m)
    seconds.append(s)

for i in range(n):
    key = k * meters[i] - seconds[i]
    if key in count:
        count[key] += 1
    else:
        count[key] = 1

max_val = max(count.values())
output_file.write(str(max_val))
