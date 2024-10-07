s1=input("enter string 1: ")
s2=input("enter string 2: ")
s3=""
a=min(len(s1),len(s2))
for i in range(a):
    s3=s3+s1[i]+s2[i]
if(len(s1)>len(s2)):
    s3+=s1[a:]
elif(len(s2)>len(s1)):
    s3+=s2[a]
print(s3)