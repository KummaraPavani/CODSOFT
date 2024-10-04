s = "aagram"
t = "nagaram"
# if(len(s) != len(t)):
#     print(False)   #inorder to make sure the result is not printed twice its better whenever we include this stmt try to implement the entire task in a function or we need to keep the part from dict = { } within the els block

dic = { }
for i in s:
    if i not in dic:
        dic[i] = 1
    else:
        dic[i] += 1

for i in t:
    if(i not in dic or t.count(i) != dic[i]):
        print(False)
        break
else:
    print(True)