input_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2018/janitor/janitorin.txt", "r")
output_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2018/janitor/janitorout.txt", "w")
r, c, q = map(int, input_file.readline().strip().split())
grid = []
peaks_grid = [[False] * c for _ in range(r)]  # Initialize peaks grid

for y in range(r):
    row = list(map(int, input_file.readline().split()))
    grid.append(row)

# Preprocess the peaks grid
for y in range(r):
    for x in range(c):
        if (y == 0 or grid[y][x] > grid[y - 1][x]) and \
           (y == r - 1 or grid[y][x] > grid[y + 1][x]) and \
           (x == 0 or grid[y][x] > grid[y][x - 1]) and \
           (x == c - 1 or grid[y][x] > grid[y][x + 1]):
            peaks_grid[y][x] = True

peaks = sum(1 for row in peaks_grid for cell in row if cell)  # Count initial peaks
output_file.write(str(peaks) + "\n")

# Update peaks grid and count peaks after each query
for _ in range(q):
    iy, ix, ih = map(int, input_file.readline().strip().split())
    ix, iy = ix - 1, iy - 1
    
    # Update grid
    grid[iy][ix] = ih
    
    # Update peaks grid
    for dy, dx in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
        ny, nx = iy + dy, ix + dx
        if 0 <= ny < r and 0 <= nx < c:
            if peaks_grid[ny][nx] and grid[iy][ix] < grid[ny][nx]:
                peaks -= 1
                peaks_grid[ny][nx] = False
            elif not peaks_grid[ny][nx] and grid[iy][ix] > grid[ny][nx]:
                peaks += 1
                peaks_grid[ny][nx] = True
    
    output_file.write(str(peaks) + "\n")

input_file.close()
output_file.close()