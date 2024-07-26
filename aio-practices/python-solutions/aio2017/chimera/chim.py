with open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2017/chimera/chimin.txt", "r") as input_file:
    N = int(input_file.readline().strip())
    word1 = [x for x in input_file.readline()]
    word2 = [x for x in input_file.readline()]
    wantedSeq = [x for x in input_file.readline()]
def chimera():
    slicectr = 0
    currarr = 3
    for i in range(N):
        wantedChar = wantedSeq[i]
        if word1[i]!=wantedChar and word2[i]!=wantedChar:
            return 'PLAN FOILED'
        if currarr == 3:
            if word1[i] == wantedChar and word2[i] == wantedChar:
                currarr = 3
            elif word1[i] == wantedChar:
                currarr = 1
            elif word2[i] == wantedChar:
                currarr = 2
        elif currarr == 2:
            if word1[i] == wantedChar and word2[i] != wantedChar:
                slicectr +=1
                currarr = 1
        elif currarr == 1:
            if word2[i] == wantedChar and word1[i] != wantedChar:
                slicectr+=1
                currarr = 2
    return f'SUCCESS\n{slicectr}'
with open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2017/chimera/chimout.txt", "w") as output_file:
    output_file.write(str(chimera()))