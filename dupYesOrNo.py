arr = [1, 2, 3]
for i in arr:
    if(arr.count(i)>1):
        print("True")
        break
else:
    print("False")