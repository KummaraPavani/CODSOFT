# arr = [1,1,2,2,2,2,2,2,2,2,3,4,4,8,8,8,9]
arr = [1, 2, 2, 3, 3, 3]
freq =  { }
for i in arr:
    if(i not in freq):
        freq[i] = 1
    else:
        freq[i] += 1

print(freq)