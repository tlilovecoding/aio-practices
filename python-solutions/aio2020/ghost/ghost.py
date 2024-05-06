class Ghost:
    def __init__(self, meter, second):
        self.meter = meter
        self.second = second

class GhostEncounter:
    def __init__(self, speed):
        self.speedPerMeter = speed
        self.ghosts = []
        self.max = 0

    def addGhost(self, meter, second):
        ghost = Ghost(meter, second)
        self.ghosts.append(ghost)

    def getMax(self):
        for i in range(len(self.ghosts)):
            if self.max >= len(self.ghosts) - i:
                break
            cnt = 1
            second = self.ghosts[i].second
            meter = self.ghosts[i].meter
            for j in range(i + 1, len(self.ghosts)):
                dist = self.ghosts[j].meter - meter
                timeGap = self.ghosts[j].second - second
                if timeGap < 0:
                    continue
                if dist * self.speedPerMeter == timeGap:
                    meter = self.ghosts[j].meter
                    second = self.ghosts[j].second
                    cnt += 1
            self.max = max(self.max, cnt)
        return self.max

input_file = open("ghostin.txt", "r")
output_file = open("ghostout.txt", "w")

# input_file = open("C:/Ting/Study/aio-practices/python-solutions/aio2020/ghost/ghostin.txt", "r")
# output_file = open("C:/Ting/Study/aio-practices/python-solutions/aio2020/ghost/ghostout.txt", "w")


N = None

K = None

input_line = input_file.readline().strip()
N, K = map(int, input_line.split())

encounter = GhostEncounter(K)

for i in range(0, N):
    M = None
    S = None
    M, S = map(int, input_file.readline().strip().split())
    encounter.addGhost(M, S)

answer = None
answer = encounter.getMax()

# Write the answer to the output file.
output_file.write("%d\n" % (answer))

# Finally, close the input/output files.
input_file.close()
output_file.close()

