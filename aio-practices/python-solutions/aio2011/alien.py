with open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2011/alienin.txt", "r") as input_file:
    N, W = map(int, input_file.readline().strip().split())
    humanpositions = [0]*N
    for i in range(N):
        humanpositions[i] = int(input_file.readline().strip())
def alienAbduction():
    l = 0
    r = 0
    maxa = 0
    curr = 0
    for r in range(N):
        while humanpositions[r]-humanpositions[l]>=W:
            l+=1
        curr = r-l+1
        maxa = max(curr, maxa)
    return maxa
with open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2011/alienout.txt", "w") as output_file:
    output_file.write(str(alienAbduction()))