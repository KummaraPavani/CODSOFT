s = "abbaca"
stack = []
for i in s:
    # if stack condition returns result whether stack is non empty or not 
    if stack and stack[-1] == i:
        stack.pop()
    else:
        stack.append(i)
print(''.join(stack))