with open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2017/mango/manin.txt", "r") as input_file:
    Ix, Cx, Id, Cd = map(int, input_file.readline().split())
 
def mangoyum():
    if Ix-Id == Cx-Cd or Ix-Id == Cx+Cd:
        return Ix-Id
    elif Ix+Id == Cx-Cd or Ix+Id == Cx+Cd:
        return Ix+Id
with open("D:/Serena/Programming/aio-practices/aio-practices/python-solutions/aio2017/mango/manout.txt", "w") as output_file:
    output_file.write(str(mangoyum()))