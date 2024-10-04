dic = { }
# s = "geeksforgeeks"
# creating dictionary to store frequency of each unique character
s = "teststring"
for i in s:
    if i not in dic:
        dic[i] = 1
    else:
        dic[i] += 1
# print(dic)

# removing keys with freq 1 from the dictionary
remKeys = [key for key in dic if(dic[key]) ==1]
for i in remKeys:
    del dic[i]

# printing in the op in the given format
str2 = ''
for i in dic:
    str2 += i+str(dic[i]) + " "

# print(dic)
print(str2.strip()) # strip function is used to remove the leading and trailing spaces in the given string 
