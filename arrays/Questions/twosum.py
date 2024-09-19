#we have given array and a number and we have to find out which two num sum is that and return there position.
def find():
    for i in range(len(a)):
        for j in range(i+1,len(a)):
            if a[i]+a[j]==tar:
                return [i,j]

a=[2,7,11,15]
tar=9
print(find())