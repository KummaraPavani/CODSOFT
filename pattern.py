height = 3
arr = [6, 28, 66, 120, 190, 276]
k = 0
for i in range(height):
    for j in range(i+1):
        val = 5 - len(str(arr[k]))
        print(val*'0' + str(arr[k]), end = " ")
        k += 1

    print()