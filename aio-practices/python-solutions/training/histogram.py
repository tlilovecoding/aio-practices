N = int(input().strip())
heights = []
for i in range(N):
    heights.append(int(input().strip()))
stack = [0]
stack2 = [N-1]
leftBounds = [0]
rightBounds = [0]*N
maxRect = 0
#left bound finding
for i in range(1,N):
    leftBound = 0
    while stack and heights[i] <= heights[stack[-1]]:
        #and stack exists
        stack.pop()
    leftBound = stack[-1] +1 if stack else 0
    leftBounds.append(leftBound)
    stack.append(i)

for j in range(N-1, -1, -1):
    while stack2 and heights[j] <= heights[stack2[-1]]:
        stack2.pop()
    rightBound = stack2[-1]-1 if stack2 else N-1
    rightBounds[j] = (rightBound)
    stack2.append(j)

# Calculate the maximum rectangle area
for i in range(N):
    width = rightBounds[i] - leftBounds[i] + 1
    height = heights[i]
    maxRect = max(maxRect, width * height)

print(maxRect)