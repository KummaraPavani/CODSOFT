from collections import Counter

arr = [2, 5, 2, 8, 5, 6, 8, 8]
# arr = [9, 9, 11, 11, 11, 9, 4, 8, 8, 11, 8, 8, 9, 4, 4, 4]
freq = Counter(arr)
newArr = sorted(arr, key = lambda x: (-freq[x], arr.index(x))) # first parameter in desc and second parameter in asce
# print(freq)
print(newArr)