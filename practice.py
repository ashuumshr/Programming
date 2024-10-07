#ques. no. 1
l=[5,3,1,0,2,7,8]
m=0
for i in l:
    if(i>m ):
        m=i
l.remove(m)

m=0
for i in l:
    if(i>m):
        m=i
print(m)

#ques no 2

# def max_num(l):
#     if len(l)==1:
#         return (l[0])
#     else:
#         x=l[0]
#         l.remove(x)
#         y=max_num(l)
#         if(x>y):
#             return(x)
# print(max_num([2,3,1,5,4]))