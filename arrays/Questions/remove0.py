#move all zero in the end of the list and mentain list order
a=[0,2,3,0,5,0,6]
for i,j in enumerate(a):
    if j==0:
        a.pop(i)
        a.append(0)
print(a)