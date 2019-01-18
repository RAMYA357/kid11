#spe
str=input()
c=0
for i in range(len(str)):
         if (str[i].isdigit()  or str[i].isalpha()):
                c=c+1
print(len(str)-c)
