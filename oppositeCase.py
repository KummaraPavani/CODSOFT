str = "Hello"
for i in str:
    if(i.isupper()):
        str = str.replace(i, i.lower())
    elif(i.islower()):
        str = str.replace(i, i.upper())

print(str)