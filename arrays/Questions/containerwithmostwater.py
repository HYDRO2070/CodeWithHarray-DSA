#we are give a array which represents container of water and we have to find out the most water in a container.
def find():
    num=0
    for i in range(len(a)):
        for j in range(i+1,len(a)):
            a1=j-i
            if a[i]>a[j]:
                a2=a[j]
            else:
                a2=a[i]
            if a1*a2>num:
                num=a1*a2
    return num

a=[1,1]
print(find())
