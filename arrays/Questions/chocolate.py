#there is a list of children and the target of childer to give chocolate. we have to find how many min amount chocolate will be needed.
import time
def find():
    a.sort()
    n=110
    for i in range(len(a)-m+1):
        e=a[i+m-1]-a[i]
        # print(a[i+m-1])
        if e<n:
            n=e
        else:
            continue
    return n

a=[7,3,2,4,9,12,56]
m=3
print(time.time())
print(find())
print(time.time())