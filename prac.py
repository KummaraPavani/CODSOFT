

import bisect

# arr = [1, 7, 8, 4, 5, 6, -1, 9]
arr = [1, 3, 5, 4, 7]

newlist = []
newlist.append(arr[0])
for i in range(1,len(arr)):
    print(newlist)
    if(arr[i] > newlist[len(newlist) - 1]):
        newlist.append(arr[i])
    else:
        position = bisect.bisect_left(newlist, arr[i])
        newlist[position] = arr[i]

print(newlist)



