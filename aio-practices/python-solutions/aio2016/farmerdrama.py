with open("farmin.txt", "r") as input_file:
    N = int(input_file.readline().strip())
    plots = list(map(int, input_file.readline().split()))
def peacebcimSoCool():
    l = 0
    r = N-1
    ctr = 0
    annaLand = plots[r]
    bobLand = plots[l]
    while l<r:
        if annaLand>bobLand:
            l+=1
            bobLand+=plots[l]
            ctr+=1
        elif bobLand>annaLand:
            r-=1
            annaLand+=plots[r]
            ctr+=1
            
        elif annaLand == bobLand:
            l+=1
            r-=1
            bobLand=plots[l]
            annaLand=plots[r]
    return ctr
with open("farmout.txt", "w") as output_file:
    output_file.write(str(peacebcimSoCool()))