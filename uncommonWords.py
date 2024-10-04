s1 = "this apple is sweet"
s2 = "this apple is sour"
res = []
l1 = s1.split()
l2 = s2.split()
for i in l1:
    if(l1.count(i)==1) and i not in l2:
        res.append(i)
for i in l2:
    if(l2.count(i)==1) and i not in l1:
        res.append(i)
print(res)

