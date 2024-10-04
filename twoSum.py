def function(arr, tar):
    arr.sort()

    i = 0
    j = len(arr) - 1
    while(i<j):
        sum = arr[i] + arr[j]
        if(sum == tar):
            return modArr.index(arr[i]),modArr.index(arr[j])
        elif(sum < tar):
            i += 1
        else:
            j -= 1


arr = [2, 7, 11, 15]
modArr = arr[:]
tar = 9
print(function(arr,tar))


