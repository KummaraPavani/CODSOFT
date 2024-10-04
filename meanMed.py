arr = [1, 3, 4, 2, 6, 5, 8, 7]
arr.sort()
mean = sum(arr)/len(arr)
print(f"mean is {mean:.1f}")
# median 
n = len(arr)
if(n%2==0):
    print("median : " , (arr[n//2-1] + arr[n//2])/2)
else:
    print("median : " , (arr[n// 2])/2)

   