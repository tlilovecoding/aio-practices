input_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2018/janitor/janitorin.txt", "r")
output_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2018/janitor/janitorout.txt", "w")

r, c, q = map(int, input_file.readline().strip().split())
grid = []
for y in range(r):
    row = list(map(int, input_file.readline().split()))
    grid.append(row)

def in_bounds(x, y):
    return 0 <= x < c and 0 <= y < r

def is_peak(x, y):
    if not in_bounds(x, y):
        return False
    if in_bounds(x + 1, y) and grid[y][x] <= grid[y][x + 1]:
        return False
    if in_bounds(x - 1, y) and grid[y][x] <= grid[y][x - 1]:
        return False
    if in_bounds(x, y + 1) and grid[y][x] <= grid[y + 1][x]:
        return False
    if in_bounds(x, y - 1) and grid[y][x] <= grid[y - 1][x]:
        return False
    return True

peaks = 0
for y in range(r):
    for x in range(c):
        if is_peak(x, y):
            peaks += 1
current_peaks = peaks
output_file.write(str(peaks) + "\n")
for _ in range(q):
    iy, ix, ih = map(int, input_file.readline().strip().split())
    ix, iy = ix - 1, iy - 1
    
    if is_peak(ix, iy):
        current_peaks -= 1
    if is_peak(ix + 1, iy):
        current_peaks -= 1
    if is_peak(ix - 1, iy):
        current_peaks -= 1
    if is_peak(ix, iy + 1):
        current_peaks -= 1
    if is_peak(ix, iy - 1):
        current_peaks -= 1

    grid[iy][ix] = ih
    
    if is_peak(ix, iy):
        current_peaks += 1
    if is_peak(ix + 1, iy):
        current_peaks += 1
    if is_peak(ix - 1, iy):
        current_peaks += 1
    if is_peak(ix, iy + 1):
        current_peaks += 1
    if is_peak(ix, iy - 1):
        current_peaks += 1

    output_file.write(str(current_peaks) + "\n")

input_file.close()
output_file.close()
