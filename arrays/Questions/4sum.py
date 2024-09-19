#what four different combination of given num addition is target find it.
def find():
    num=[]
    for i in range(0,len(nums)):
        
        for j in range(i+1,len(nums)):
            
            for k in range(j+1,len(nums)):
                for l in range(k+1,len(nums)):
                    a=[]                
                    if nums[i]+nums[j]+nums[k]+nums[l]==tar and i!=j!=k!=l:                        
                        a.append(nums[i])
                        a.append(nums[j])
                        a.append(nums[k])
                        a.append(nums[l])
                        num.append(a)
    return num

nums=[1,0,-1,0,-2,2]
nums.sort()
tar=0
print(find())