def findPairs():
    ans = [[0 for _ in range(N)] for _ in range(N)]
    for i in range(K):
        for j in range(N-1):
            for l in range(j+1, N):
                ans[scores[i][j] - 1][scores[i][l] - 1] += 1
    cnt = 0
    for i in range(N):
        for j in range(N):
            if ans[i][j] == K:
                cnt += 1
    return cnt

with open("gymnastics.in", "r") as input_file:
    K, N = map(int, input_file.readline().split())
    scores = []
    for i in range(K):
        line = list(map(int, input_file.readline().split()))
        scores.append(line)

with open("gymnastics.out", "w") as output_file:
    output_file.write(str(findPairs()))