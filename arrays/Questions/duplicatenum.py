#in this question we have to find out duplicate or we can say that there is a num which has been repeated so we have to print that number.
def check():
    nums.sort()
    for i in range(len(nums)-1):
        if nums[i]==nums[i+1]:
            return nums[i]
    return None


nums=[3,1,3,4,2]
print(check())