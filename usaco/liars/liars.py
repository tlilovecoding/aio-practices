N = int(input())
arr = []
for i in range(N):
    pair = input().split()
    arr.append(pair)
L = []
G = []
for i in range(len(arr)):
    if arr[i][0] == "L":
       L.append(int(arr[i][1]))
    else:
        G.append(int(arr[i][1]))
L.sort()
G.sort()
minLiars = float('inf') 
for i in range(len(G)):
    currLiars = 0
    for j in range(len(L)):
        if G[j] > L[i]:
            currLiars+=1
    currLiars += len(G) - (i+1) #duplicated, becausew we are treating the G value as the upper bound
    minLiars = min(currLiars, minLiars)
print(minLiars)
