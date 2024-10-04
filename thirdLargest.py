# arrOld = [1, 2, 3, 5, 6, 0]
# arrOld = [3, 2, 1]
# arrOld = [1, 2]
arrOld = [2, 2, 3, 1]
arr = list(set(arrOld))
res = max(arr)
arr.sort(reverse = True)

if(len(arr) >= 3):
    print("3rd maximum ele is: ", arr[2])
else:
    print("3rd maximum ele is: ", res)

# removing the duplicates without changing the order (only for python 3.7+ versions)
# arr = [1, 2, 2, 3, 4, 4, 5]
# arr = list(dict.fromkeys(arr))
# print(arr)