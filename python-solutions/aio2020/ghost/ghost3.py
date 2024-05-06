input_file = open("ghostin.txt", "r")
output_file = open("ghostout.txt", "w")

# input_file = open("C:/Ting/Study/aio-practices/python-solutions/aio2020/ghost/ghostin.txt", "r")
# output_file = open("C:/Ting/Study/aio-practices/python-solutions/aio2020/ghost/ghostout.txt", "w")

n, k = map(int, input_file.readline().split())
meters = [] # use this to record positions
seconds = [] # use this to record seconds

# get all ghosts
for _ in range(n):
    m, s = map(int, input_file.readline().split())
    meters.append(m)
    seconds.append(s)

def get_max():
    max_val = 1
    encountered = [False] * len(meters)
    for i in range(len(meters)):
        if encountered[i]:
            continue
        cnt = 1
        cur_meter = meters[i]
        cur_sec = seconds[i]
        for j in range(i + 1, len(meters)):
            if encountered[j]:
                continue
            if meters[j] == cur_meter and seconds[j] == cur_sec:
                encountered[j] = True
                cnt += 1
                continue
            if (meters[j] - cur_meter) * k == (seconds[j] - cur_sec):
                encountered[j] = True
                cnt += 1
                cur_meter = meters[j]
                cur_sec = seconds[j]
                continue
        max_val = max(max_val, cnt)
    return max_val


max_val = get_max()
output_file.write(str(max_val))
