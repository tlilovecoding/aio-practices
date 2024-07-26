N = int(input().strip())
heights = [-1]*N
for i in range(N):
    heights[i] = int(input())
stack = []
ans = [-1]*N
for i in range(N-1, -1, -1):
    while stack and heights[i] >= heights[stack[-1]]:
        stack.pop()
    if stack: 
        ans[i] = stack[-1] +1
    stack.append(i)
print(ans)