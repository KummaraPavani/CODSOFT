arr = [12, 13, 1, 10, 34, 1]
newarr = []
arr.sort()
# removing duplicates
for i in arr:
    if(i not in newarr):
        newarr.append(i)
print(newarr)
print(newarr[0])
print(newarr[1])