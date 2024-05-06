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
    visited = [False] * len(meters)
    left = 0
    max_val = 0
    while left < len(meters):
        if visited[left]:
            left += 1
            continue
        cnt = 1
        right = left + 1
        visited[left] = True
        while right < len(meters):
            if visited[right]:
                right += 1
                continue
            if (meters[right] - meters[left]) * k == seconds[right] - seconds[left]:
                cnt += 1
                visited[right] = True
            right += 1
        max_val = max(max_val, cnt)
        left += 1
    return max_val


max_val = get_max()
output_file.write(str(max_val))
