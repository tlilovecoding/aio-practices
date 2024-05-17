with open("nomin.txt", "r") as input_file:
    N = int(input_file.readline().strip())
    dishes = [0]*N
    for i in range(N):
        dishes[i] = int(input_file.readline().strip())
def beingAGoodHippo():
    firstfatHippoDiet = dishes[0]
    currFatHippoDiet = firstfatHippoDiet
    happyHippos = 0
    cnt = 0
    for i in range(N):
        cnt+=dishes[i]
        if cnt>=currFatHippoDiet:
            currFatHippoDiet = cnt
            happyHippos+=1
            cnt = 0
    return happyHippos
with open("nomout.txt", "w") as output_file:
    output_file.write(str(beingAGoodHippo()))