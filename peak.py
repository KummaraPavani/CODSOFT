# arr = [1,2,3,1]
arr =  [1, 2]
# arr =  [1]
for i in range(len(arr)):
    if(len(arr) == 1):
        print(0)
    elif((i==0 or arr[i-1] < arr[i]) and (i==len(arr)-1 or arr[i]> arr[i+1])):
        print(i)
