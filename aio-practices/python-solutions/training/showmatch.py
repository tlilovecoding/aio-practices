N = int(input())
wrestlers = list(map(int, input().split()))
ans = [0]
stack = [wrestlers[0]]
for j in range(1,N):
    count = 0
    for i in range(len(stack)-1, -1, -1):
        if stack[i] < wrestlers[j]:
            stack.pop()
            count+=1
        else:
            break
    ans.append(count)
    stack.append(wrestlers[j])
for i in ans:
    print(i, end = ' ')