with open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2017/tag/tagin.txt", "r") as input_file:
    N, M = map(int, input_file.readline().split())
    tagSeq = []
    for i in range(M):
        tagSeq.append(list(map(int, input_file.readline().split())))
 
def imTagPolice():
    dct = {}
    dct[1] = 0
    dct[2] = 1
    for x in tagSeq:
        if dct[x[0]] == 0:
            dct[x[1]] = 0
        else:
            dct[x[1]] = 1
    ctr1 = 0
    ctr2 = 0
    for v in dct.values():
        if v == 0:
            ctr1+=1
        else:
            ctr2+=1
    return str(ctr1) + " " + str(ctr2)
 
with open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2017/tag/tagout.txt", "w") as output_file:
    output_file.write(imTagPolice())