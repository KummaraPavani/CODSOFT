n = int(input("enter the size:"))
words = []
for i in range(n):
    words.append(input("enter the ip:"))

for i in words:
    if(words.count(i) > 1):
        words.remove(i) # remove function removes only one occurrance of any particular item

print(words)


