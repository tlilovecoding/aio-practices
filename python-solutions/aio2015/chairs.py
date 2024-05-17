with open("chairsin.txt", "r") as input_file:
    C, N, K = map(int, input_file.readline().strip().split())
    chairs = input_file.readline().strip()
    chairsa = []
    for i in chairs:
        chairsa.append(i)
    print(chairsa)
def chairs():
    dryChairPos = []
    stubbornPeople = N - K
    for i in range(C):
        if chairsa[i] == 'd':
            dryChairPos.append(i)
    print(dryChairPos)
    mindist = float('inf')
    if stubbornPeople == 0:
        return N
    for i in range(stubbornPeople-1, len(dryChairPos)):
        distance = dryChairPos[i] - dryChairPos[i - stubbornPeople+1]+1
        mindist = min(distance, mindist)
        print(mindist)
        if mindist < N:
            mindist = N
    return mindist
 
with open("chairsout.txt", "w") as output_file:
    output_file.write(str(chairs()))