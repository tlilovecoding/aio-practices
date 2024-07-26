with open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2023/makingbank/bankin.txt", "r") as input_file:
    N = int(input_file.readline().strip())
    days = input_file.readline().strip()

def makingBank():
    s = 1
    ttl = 0
    for i in range(N):
        if days[i] == 'M':
            ttl += s
        else:
            if N-i-s>1:
                s+=1
            else:
                ttl+=s
            
    return ttl
with open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2023/makingbank/bankout.txt", "w") as output_file:
    output_file.write(str(makingBank()))