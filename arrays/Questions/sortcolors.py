# we have to sort the list withput using any libary like sort. 
a=[0,0,0,1,2,1,2,1,2,2,2,1,1,0,0,0,1,2,2,2,1,1,2]
# n=len(a)
# for i in range(1,n):
#     key=a[i]
#     j=i-1
#     while j>=0 and key<a[j]:
#         a[j+1]=a[j]
#         j-=1
#     a[j+1]=key



# .........................................................................................second method
for i in range(len(a)):
    for j in range(i+1,len(a)):
        if a[i]>a[j]:
            num=a[i]
            a[i]=a[j]
            a[j]=num
print(a)