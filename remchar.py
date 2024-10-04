str1 = "abcdef"
str2 = "acf"
for i in str2:
    if i in str1:
        str1 = str1.replace(i,'')
        # assigning is manadatory to modify the string
print(str1)