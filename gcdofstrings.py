str1="ABABAB"
str2="A"
str3=""
# if(str2 in str1):
#     m=len(str1)/len(str2)
#     if(str1==str2*m):
#         str3+=str2/
#print(str3)
for i in range(len(str2),0,-1):
    if len(str1)%i==0 and len(str2)%i==0:
        new=i
        print(new)
        break
print(str2," is not equal to ", str2[:new]*len(str2)) if (str2[:new]*len(str2)!=str2) is True else print("equal")
