xy = []
with open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2021/artclass2/artin.txt", "r") as input_file:
    N = int(input_file.readline().strip())  # Convert map object to int
    for _ in range(N):
        xy.append(list(map(int, input_file.readline().split())))  # Removed unnecessary list wrapper

def artClass():
    maxX = 0
    maxY = 0
    minX = 10000
    minY = 10000
    for point in xy:  # Iterate over xy, not range(xy)
        if point[0] > maxX:
            maxX = point[0]
        if point[0]<minX:
            minX = point[0]
        if point[1] > maxY:
            maxY = point[1]
        if point[1]<minY:
            minY = point[1]
    print(maxX)
    print(maxY)
    area = (maxX-minX) * (maxY-minY)
    print(area)
    return area

with open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2021/artclass2/artout.txt", "w") as output_file:
    output_file.write(str(artClass()))
