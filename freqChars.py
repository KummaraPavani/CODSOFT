dic = { }
s = "geeksforgeeks"
# s = "teststring"
for i in s:
    if i not in dic:
        dic[i] = 1
    else:
        dic[i] += 1
        
# print(dic)
str2 = ''
for i in dic:
    str2 += i+str(dic[i]) + " "

print(str2.strip()) # strip function is used to remove the leading and trailing spaces in the given string 
