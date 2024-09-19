#as the name suggest we have to find duplicate in nums and return its index.
def find():
    a=[]
    for i in nums:
        if nums.count(i)>1:
            if a.count(nums.index(i)+1)==0:
                a.append(nums.index(i)+1)
    return a

nums=[4,3,2,7,8,2,3,1]
print(find())