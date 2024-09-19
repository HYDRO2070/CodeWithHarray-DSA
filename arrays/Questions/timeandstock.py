a=[7,1,5,3,6,4]        #we have to check when to take a stock and when to sell. only buy stock if it give any profit otherwise dont.
b=a.copy()
b.sort()
c=a.index(b[0])
e=0
for i in range(c,len(a)):
    if(a[c]<a[i] and e<a[i]):
        e=a[i]
if(e==0):
    print(0)
else:
    print(e-c)
