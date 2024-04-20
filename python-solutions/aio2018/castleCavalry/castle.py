input_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2018/castlecavalry/castlein.txt", "r")
output_file = open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2018/castlecavalry/castleout.txt", "w")
N = int(input_file.readline().strip())
I = [int(input_file.readline().strip()) for _ in range(N)]

def castleCavalry():
    dct = {}
    for i in I:
        if i in dct:
            dct[i] += 1
        else:
            dct[i] = 1
    for k, v in dct.items():
        if v % k != 0:
            return 'NO'
    return 'YES'

ans = castleCavalry()

output_file.write(ans+ "\n")

input_file.close()
output_file.close()
