def frocOlympics():
    leftleast = [0] * N
    leftleast[0] = heights[0]
    rightleast = [0] * N
    rightleast[N-1] = heights[N-1]
    
    for i in range(1, N):
        leftleast[i] = min(leftleast[i-1], heights[i])
    
    for i in range(N-2, -1, -1):
        rightleast[i] = min(rightleast[i+1], heights[i])
    
    maxIndex = 0
    for i in range(N):
        if heights[i] > leftleast[i] and heights[i] > rightleast[i]:
            index = 2 * heights[i] - leftleast[i] - rightleast[i]
            maxIndex = max(index, maxIndex)
    
    return maxIndex
 
with open("frogin.txt", "r") as input_file:
    N = int(input_file.readline().strip())
    heights = [0] * N
    for i in range(N):
        heights[i] = int(input_file.readline().strip())
 
result = frocOlympics()
 
with open("frogout.txt", "w") as output_file:
    output_file.write(str(result))