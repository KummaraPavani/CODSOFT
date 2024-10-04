arr = [4, 3, 2, 7, 8, 2, 3, 1]
for i in arr:
    if(arr.count(i)==1 or i in arr):
        arr.remove(i)

print(arr)