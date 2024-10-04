s = "abc123!@#"
vowels = "aeiouAEIOU"
vow = 0
con = 0
dig = 0
spe = 0
for i in s:
    if(i.isalpha()):
        if i in vowels:
            vow += 1
        else:
            con += 1
    elif(i.isdigit()):
        dig += 1
    else:
        spe += 1
print(vow, con, dig, spe)