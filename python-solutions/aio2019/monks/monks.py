with open("monksin.txt", "r") as input_file:
    N = int(input_file.readline().strip())
    monks = [0]*N
    for i in range(N):
        monks[i] = int(input_file.readline().strip())
    S = int(input_file.readline().strip())
    students = [0]*S
    for i in range(S):
        students[i] = int(input_file.readline().strip())
    M = int(input_file.readline().strip())
    master = [0]*M
    for i in range(M):
        master[i] = int(input_file.readline().strip())
monks.sort()
students.sort()
master.sort()
print(monks)
print(students)
print(master) 
l = 0
r = N-1
for i in students:
    if monks[l] <= i:
        l+=1
for x in range(M):
    if monks[r] >= master[x]:
        r-=1
    if r<l:
        break
ans = N-r+l-1
with open("monksout.txt", "w") as output_file:
    output_file.write(str(ans))