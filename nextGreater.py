op = []
n1 = [4, 1, 2]
n2 = [1, 3, 4, 2]
for i in n1:
    if(i in n2):
        ind = n2.index(i)
        print("index ", ind)
        for j in range(ind+1,len(n2)):
            if(n2[j] > i):
                op.append(n2[j])
                break
        else:
            op.append(-1)

print(op)
