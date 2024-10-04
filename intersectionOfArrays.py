def intersection(arr1, arr2):
    i = 0
    j = 0
    arr = []
    while(i<len(arr1) and j<len(arr2)):
        if(arr1[i] < arr2[j]):
            i += 1
        elif(arr1[i] > arr2[j]):
            j += 1
        else:
            arr.append(arr1[i])
            i += 1
            j += 1
    return arr
print(intersection([1, 1, 2, 2], [2, 2]))
