input_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2018/janitor/janitorin.txt", "r")

r, c, q = map(int, input_file.readline().strip().split())
grid = []
for y in range(r):
    row = list(map(int, input_file.readline().split()))
    grid.append(row)

print("Grid before modifications:")
for row in grid:
    print(row)

def inBounds(x, y):
    return 0 <= x < c and 0 <= y < r

def is_peak(x, y):
    if inBounds(x + 1, y) and grid[y][x] < grid[y][x + 1]:
        return False
    if inBounds(x - 1, y) and grid[y][x] < grid[y][x - 1]:
        return False
    if inBounds(x, y + 1) and grid[y][x] < grid[y + 1][x]:
        return False
    if inBounds(x, y - 1) and inBounds(x, y - 1) and grid[y][x] < grid[y - 1][x]:
        return False
    return True


ctr = 0
for w in range(r):
    for z in range(c):
        if is_peak(z, w):
            ctr += 1

print("Initial number of peaks:", ctr)

with open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2018/janitor/janitorout.txt", "w") as out_file:
    out_file.write(str(ctr) + "\n")

    for _ in range(q):
        ix, iy, ih = map(int, input_file.readline().strip().split())
        ix, iy = ix - 1, iy - 1

        print("Replacing tile at position:", ix, iy, "with height:", ih)

        if is_peak(ix, iy):
            ctr -= 1
        if is_peak(ix + 1, iy):
            ctr -= 1
        if is_peak(ix - 1, iy):
            ctr -= 1
        if is_peak(ix, iy + 1):
            ctr -= 1
        if is_peak(ix, iy - 1):
            ctr -= 1

        grid[iy][ix] = ih

        if is_peak(ix, iy):
            ctr += 1
        if is_peak(ix + 1, iy):
            ctr += 1
        if is_peak(ix - 1, iy):
            ctr += 1
        if is_peak(ix, iy + 1):
            ctr += 1
        if is_peak(ix, iy - 1):
            ctr += 1

        print("Updated number of peaks:", ctr)

        out_file.write(str(ctr) + "\n")

input_file.close()  # Don't forget to close the input file
