# in this we have give a sorted array we have to remove duplicate element from it.
a=[0,0,1,1,1,2,2,3,3,4,5]

for i in range(len(a)):
    for j in range(i+1,len(a)):
        if a[i]==a[j]:
            a[j]=-1
a.sort()
while a[0]==-1:
    a.pop(0)
    a.append(-1)

print(a)        