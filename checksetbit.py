n=int(input("Enter a number: "))
k=int(input("which bit you want to check: "))
x=bin(n).replace("0b","")
l=list(x.split())
print(l,l[k-1])

if x[k-1]=='1':
    print("Yes")
else:
    print("No")