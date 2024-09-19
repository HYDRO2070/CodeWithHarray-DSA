def reorder():
    a1,a2=0,len(a)-1
    b=[]
    while(a1<a2):
        b.append(a[a1])
        b.append(a[a2])
        a1+=1
        a2-=1
    if a1==a2:
        b.append(a[a1])
    return b

a=[1,2,3,4,5,6,7,8,9,0]

print(reorder())