#in this we have given a array in which we have to find set of array which sum is divisible by k.
def find():
    p=0
    for i in range(len(nums)):
        m=0
        for j in range(i,len(nums)):
            m=m+nums[j]
            if m%k==0:
                p+=1
    return p

nums=[5]
k=9
print(find())