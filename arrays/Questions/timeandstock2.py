#it is shame as before where there is stock we have to sell and gain profit out of it but the main difference is that we can sell multiple times.
def find():
    p=0
    # a.sort()
    for i in range(len(a)-1):
        if a[i+1]-a[i]>0:
            p=p+a[i+1]-a[i]
        else:
            continue
    return p


a=[5,4,3,2,1]
print(find())