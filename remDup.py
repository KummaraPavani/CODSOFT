arr = ["apple", "banana", "orange", "banana", "apple"]
list = []
for i in arr:
    if i  not in list:
        list.append(i)
print(list)
